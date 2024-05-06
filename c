import { Component } from '@angular/core';

@Component({
  selector: 'app-my-component',
  template: `
    <article class="bg-white rounded shadow-sm">
      <div class="flex gap-5 max-md:flex-col max-md:gap-0">
        <figure class="flex flex-col w-[33%] max-md:ml-0 max-md:w-full">
          <img loading="lazy" src="{{imageSrc}}" alt="" class="grow w-full aspect-[1.79]" />
        </figure>
        <div class="flex flex-col ml-5 w-[67%] max-md:ml-0 max-md:w-full">
          <div class="flex flex-col grow p-6 text-base text-blue-800 max-md:px-5 max-md:max-w-full">
            <header class="flex gap-2.5 justify-between text-sm font-bold leading-5 whitespace-nowrap max-md:flex-wrap max-md:max-w-full">
              <h2>NEWS</h2>
              <img loading="lazy" src="{{iconSrc}}" alt="News Icon" class="shrink-0 w-5 aspect-square" />
            </header>
            <h3 class="mt-3 text-3xl leading-10 text-slate-700 max-md:max-w-full">
              Exiting the Bank Term Funding Program
            </h3>
            <p class="mt-3 leading-6 text-slate-700 max-md:max-w-full">
              Learn more about how to position your institution for success.<br />
            </p>
            <div tabindex="0" role="button" class="flex gap-2 justify-center self-start mt-3 font-medium rounded-lg leading-[150%] cursor-pointer">
              <span>Read More</span>
              <img loading="lazy" src="{{arrowIconSrc}}" alt="" class="shrink-0 my-auto w-5 aspect-square" />
            </div>
          </div>
        </div>
      </div>
    </article>
  `,
  styles: []
})
export class MyComponent {
  imageSrc: string;
  iconSrc: string;
  arrowIconSrc: string;

  constructor() {
    // Image sources would be initialized here
    this.imageSrc = 'https://cdn.builder.io/api/v1/image/assets%2F...';
    this.iconSrc = 'https://cdn.builder.io/api/v1/image/assets%2F...';
    this.arrowIconSrc = 'https://cdn.builder.io/api/v1/image/assets%2F...';
  }
}
