import { Component, NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';

@Component({
  selector: 'app-my-component',
  template: `
    <main class="flex flex-col items-center justify-center p-5">
      <section class="flex gap-5 max-md:flex-col max-md:gap-0">
        <article class="w-6/12 max-md:w-full">
          <img loading="lazy" src="{{imageUrl1}}" alt="Image description" class="grow w-full aspect-[1.79] max-md:mt-6 max-md:max-w-full">
        </article>
        <div class="flex flex-col ml-5 w-6/12 max-md:ml-0 max-md:w-full">
          <header class="px-5 py-2 bg-blue-800 text-white text-lg rounded-t">
            <h1 class="text-xl font-bold">Title Heading</h1>
          </header>
          <div class="flex flex-col grow px-5 py-2 text-base leading-6 text-blue-800 max-md:mt-6 max-md:max-w-full">
            <time datetime="2024-02-22" class="font-medium">22 Feb, 2024</time>
            <h2 class="mt-1 text-5xl font-medium tracking-tighter leading-[60px] text-slate-700 max-md:max-w-full max-md:text-4xl max-md:leading-[56px]">
              Spirit of Resilience on Marvel Way
            </h2>
            <p class="mt-2 text-lg leading-7 text-slate-700 max-md:max-w-full">
              At a residential substance abuse treatment center like Reno’s The Empowerment Center (TEC), clients and
              staff devote themselves completely to the hard work of turning around lives devastated by drugs and alcohol.
              Graduation from TEC’s intensive five-month recovery program is a tremendous accomplishment...
            </p>
            <a href="#" tabindex="0" class="flex gap-2 justify-center self-start mt-16 font-medium rounded-lg text-blue-800 hover:text-blue-600 focus:text-blue-600 max-md:mt-10">
              <span>Read More</span>
              <img loading="lazy" src="{{imageUrl2}}" alt="" class="shrink-0 my-auto w-5 aspect-square"> <!-- Decorative, so alt="" -->
            </a>
          </div>
        </div>
      </section>
    </main>
  `,
})
export class MyComponent {}

@NgModule({
  declarations: [MyComponent],
  imports: [CommonModule],
  exports: [MyComponent],
})
export class MyComponentModule {}
