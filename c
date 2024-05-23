import { NgModule } from "@angular/core";
import { CommonModule } from "@angular/common";
import { Component } from "@angular/core";

@Component({
  selector: "my-component",
  template: `
    <section class="flex justify-center items-center px-16 py-20 bg-white max-md:px-5">
      <div class="flex flex-col mt-10 w-full max-w-[1220px] max-md:max-w-full">
        <header
          class="flex gap-5 justify-between px-0.5 w-full font-medium text-blue-800 max-md:flex-wrap max-md:max-w-full"
        >
          <h1
            class="text-6xl tracking-tighter leading-[72px] max-md:max-w-full max-md:text-4xl"
          >
            Community Spotlight
          </h1>
          <a
            href="#"
            class="flex gap-2 justify-center my-auto text-base leading-6 rounded-lg"
            tabindex="0"
          >
            <span>View All Stories</span>
            <img
              loading="lazy"
              src="https://cdn.builder.io/api/v1/image/assets/TEMP/e5626462222ef0c83e58cac7e19145b09174fcd6e476440918303e3c4fb72a12?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
              alt=""
              class="shrink-0 my-auto w-5 aspect-square"
            />
          </a>
        </header>
        <article class="justify-center mt-12 max-md:mt-10 max-md:max-w-full">
          <div class="flex gap-5 max-md:flex-col max-md:gap-0">
            <figure class="flex flex-col w-6/12 max-md:ml-0 max-md:w-full">
              <img
                loading="lazy"
                src="https://cdn.builder.io/api/v1/image/assets/TEMP/3a4b910575ffa940688f5c3609f65512abd7f1bc11d5d63ba05f9e6fb18b979e?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
                alt="Helping Young Adults Find Career Success in the Creative Arts"
                class="grow w-full aspect-[1.67] max-md:mt-6 max-md:max-w-full"
              />
            </figure>
            <div class="flex flex-col ml-5 w-6/12 max-md:ml-0 max-md:w-full">
              <div
                class="flex flex-col grow justify-between self-stretch text-base font-medium leading-6 text-blue-800 max-md:mt-6 max-md:max-w-full"
              >
                <h2 class="font-bold text-ellipsis max-md:max-w-full">AHEAD</h2>
                <p
                  class="mt-1 text-5xl tracking-tighter leading-[60px] text-slate-700 max-md:max-w-full max-md:text-4xl max-md:leading-[56px]"
                >
                  Helping Young Adults Find Career Success in the Creative Arts
                </p>
                <p
                  class="mt-2 text-lg leading-7 whitespace-nowrap text-ellipsis text-slate-700 max-md:max-w-full"
                >
                  Honey Art Studio is creating brighter futures for Black youth
                  and young adults in San Francisco's historic Fillmore
                  neighborhood with the support of an AHEAD economic development
                  grant, delivered in partnership with FHLBank San Francisco
                  member CDFI Community Vision Capital & Consulting.
                </p>
                <a
                  href="#"
                  class="flex gap-2 justify-center self-start mt-12 rounded-lg max-md:mt-10"
                  tabindex="0"
                >
                  <span>Read More</span>
                  <img
                    loading="lazy"
                    src="https://cdn.builder.io/api/v1/image/assets/TEMP/6bc59b8c61461040eab39fef904f60d045ff0bb868e1d3823db6481f22e2f8b9?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
                    alt=""
                    class="shrink-0 my-auto w-5 aspect-square"
                  />
                </a>
              </div>
            </div>
          </div>
        </article>
        <section
          class="justify-center px-0.5 mt-8 max-md:max-w-full"
        >
          <div class="flex gap-5 max-md:flex-col max-md:gap-0">
            <article
              class="flex flex-col w-[33%] max-md:ml-0 max-md:w-full"
              tabindex="0"
            >
              <figure
                class="flex flex-col grow text-base font-medium leading-6 text-blue-800 max-md:mt-8"
              >
                <img
                  loading="lazy"
                  src="https://cdn.builder.io/api/v1/image/assets/TEMP/b4cfc27b8dd0fa1363cbf3dee820e5387319099f9f77643dd59be9c1a4103b19?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
                  alt="Spirit of Resilience on Marvel Way"
                  class="w-full aspect-[1.67]"
                />
                <figcaption>
                  <h3 class="mt-4 font-bold text-ellipsis">AHP</h3>
                  <p class="mt-1 text-2xl leading-8 text-slate-700">
                    Spirit of Resilience on Marvel Way
                  </p>
                  <p class="mt-2 leading-6 text-ellipsis text-slate-700">
                    At a residential substance abuse treatment center like
                    Reno’s The Empowerment Center (TEC), clients and staff
                    devote themselves completely to the hard work of turning
                    around lives devastated by drugs and alcohol. Graduation
                    from TEC’s intensive five-month recovery program is a
                    tremendous accomplishment, but one that
                  </p>
                  <a
                    href="#"
                    class="flex gap-2 justify-center self-start mt-16 rounded-lg max-md:mt-10"
                    tabindex="0"
                  >
                    <span>Read More</span>
                    <img
                      loading="lazy"
                      src="https://cdn.builder.io/api/v1/image/assets/TEMP/8715411aef5cf4ad87cf2592b141d2e53e547398586c0a2a0efd477fa922e6a2?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
                      alt=""
                      class="shrink-0 my-auto w-5 aspect-square"
                    />
                  </a>
                </figcaption>
              </figure>
            </article>
            <article
              class="flex flex-col ml-5 w-[33%] max-md:ml-0 max-md:w-full"
              tabindex="0"
            >
              <figure
                class="flex flex-col grow text-base font-medium leading-6 text-blue-800 max-md:mt-8"
              >
                <img
                  loading="lazy"
                  src="https://cdn.builder.io/api/v1/image/assets/TEMP/10885f22a41e63ad5c8f49bc31457c8ae4841650135ea49ed7201d3b6110a1b4?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
                  alt="Doris Ealy Finds Home"
                  class="w-full aspect-[1.67]"
                />
                <figcaption>
                  <h3 class="mt-4 font-bold text-ellipsis">AHP</h3>
                  <p class="mt-1 text-2xl leading-8 text-slate-700">
                    Doris Ealy Finds Home
                  </p>
                  <p class="mt-2 leading-6 text-ellipsis text-slate-700">
                    Doris Ealy, 56, never felt comfortable renting a room under
                    someone else’s roof. The single mother of four children and
                    grandmother to four didn’t like cooking in a shared kitchen
                    or how her landlord treated her family members and guests.
                  </p>
                  <a
                    href="#"
                    class="flex gap-2 justify-center self-start mt-16 rounded-lg max-md:mt-10"
                    tabindex="0"
                  >
                    <span>Read More</span>
                    <img
                      loading="lazy"
                      src="https://cdn.builder.io/api/v1/image/assets/TEMP/2b19cd9b30d759642e4a866fdba3aac446ad0d837f1171bd25ba44a09b7f0735?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
                      alt=""
                      class="shrink-0 my-auto w-5 aspect-square"
                    />
                  </a>
                </figcaption>
              </figure>
            </article>
            <article
              class="flex flex-col ml-5 w-[33%] max-md:ml-0 max-md:w-full"
              tabindex="0"
            >
              <figure
                class="flex flex-col grow text-base font-medium leading-6 text-blue-800 max-md:mt-8"
              >
                <img
                  loading="lazy"
                  src="https://cdn.builder.io/api/v1/image/assets/TEMP/a2c24343ddadeab9fa4fb55d6f52b018332cb660a44b3117fa7ce50d5f44efd1?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
                  alt="Expanding Possibilities & Enriching Communities"
                  class="w-full aspect-[1.67]"
                />
                <figcaption>
                  <h3 class="mt-4 font-bold text-ellipsis">AHEAD</h3>
                  <p class="mt-1 text-2xl leading-8 text-slate-700">
                    Expanding Possibilities & Enriching Communities
                  </p>
                  <p class="mt-2 text-ellipsis text-slate-700">
                    Derek West, who is 26 years old and diagnosed on the autism
                    spectrum, says he got the idea that...
                  </p>
                  <a
                    href="#"
                    class="flex gap-2 justify-center self-start mt-16 rounded-lg max-md:mt-10"
                    tabindex="0"
                  >
                    <span>Read More</span>
                    <img
                      loading="lazy"
                      src="https://cdn.builder.io/api/v1/image/assets/TEMP/2b19cd9b30d759642e4a866fdba3aac446ad0d837f1171bd25ba44a09b7f0735?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
                      alt=""
                      class="shrink-0 my-auto w-5 aspect-square"
                    />
                  </a>
                </figcaption>
              </figure>
            </article>
          </div>
        </section>
      </div>
    </section>
  `,
})
export class MyComponent {}

@NgModule({
  declarations: [MyComponent],
  imports: [CommonModule],
  exports: [MyComponent],
})
export class MyComponentModule {}
