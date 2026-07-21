//  booking.component.ts  

import { Component, OnInit } from '@angular/core';
import { FormBuilder, FormGroup, Validators, AbstractControl } from '@angular/forms';
import { Router } from '@angular/router';

@Component({ selector: 'app-booking', templateUrl: './booking.component.html' })
export class BookingComponent implements OnInit {
  bookingForm: FormGroup;

  constructor(private fb: FormBuilder, private router: Router) {
    this.bookingForm = this.fb.group({
      passengerName: ['', Validators.required],
      dateOfTravel: ['', [Validators.required, this.futureDateValidator]],
      seatPreference: ['', Validators.required],
      mealPreference: ['', Validators.required]
    });
  }

  // Custom validator to ensure date is not in the past
  futureDateValidator(control: AbstractControl) {
    const selectedDate = new Date(control.value);
    const today = new Date();
    today.setHours(0, 0, 0, 0);
    return selectedDate >= today ? null : { pastDate: true };
  }

  onSubmit() {
    if (this.bookingForm.valid) {
      console.log('Success:', this.bookingForm.value);
      this.router.navigate(['/welcome']);
    } else {
      this.router.navigate(['/error']);
    }
  }
}
