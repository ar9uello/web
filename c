import { NgModule } from "@angular/core";
import { CommonModule } from "@angular/common";
import { Component } from "@angular/core";

@Component({
  selector: "my-component",
  template: `
    <section class="flex flex-col text-base">
      <nav
        class="flex gap-4 pr-20 font-medium text-blue-800 leading-[150%] max-md:flex-wrap max-md:pr-5"
      >
        <button
          class="flex gap-1.5 justify-between px-5 py-3 rounded border border-blue-800 border-solid shadow-sm"
        >
          <span>Hide Transcript</span>
          <img
            loading="lazy"
            src="https://cdn.builder.io/api/v1/image/assets/TEMP/ec5dc7f7c081ec7849d82a23ae44e41194d1e38a17058b22efec435ac8f186e6?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
            alt=""
            class="shrink-0 my-auto w-5 aspect-square"
          />
        </button>
        <button
          class="flex gap-1.5 justify-between px-5 py-3 whitespace-nowrap rounded border border-blue-800 border-solid shadow-sm"
        >
          <span>Share</span>
          <img
            loading="lazy"
            src="https://cdn.builder.io/api/v1/image/assets/TEMP/191d4025a011b86a56981b5e63f1917eeeacd849ca3e901bbc589bcdc0a0276d?apiKey=8cf6fc7fc522453d9bac782a5726fda8&"
            alt=""
            class="shrink-0 my-auto w-5 aspect-square"
          />
        </button>
      </nav>
      <article
        class="flex gap-2 justify-between py-6 pr-3 pl-6 mt-2 leading-6 text-gray-900 whitespace-nowrap bg-white rounded-lg border border-gray-300 border-solid shadow-sm max-md:flex-wrap max-md:pl-5"
      >
        <div class="flex-1 text-ellipsis max-md:max-w-full">
          <p>
            <strong
              >Michael Lasher, Chief Executive Officer in Community Commerce
              Bank:</strong
            >
            One of the interesting things about the business of banking is it's
            always changing. We're quite a bit different than most banks in the
            industry. It starts with our charter. We're chartered as an
            industrial loan company, which allows us to be owned by a
            non-banking entity.
            <br />
            I'm really proud of the fact that we look into areas most banks
            don't and help Mom and Dad, help the first-time investor, the
            first-time borrower. All of the banks have their business continuity
            plans and their strategic funding plans. The Federal Home Loan Bank
            of San Francisco is a cornerstone of that for us. You know, we use
            them in a variety of ways in our funding strategies here at the
            bank. Over the years, we've learned that the Federal Home Loan Bank
            of San Francisco is a great source of stability for us.
            <br />
            Our customers benefit from our relationship because we're able to
            make decisions faster, fund loans faster, knowing that there's the
            safety net of the Federal Home Loan Bank standing right beside us.
          </p>
          <p>
            <strong
              >Lauren Cooper, Assistant Vice President in Community Commerce
              Bank:</strong
            >
            If someone comes in and needs a loan because they just came from a
            different bank and they're not able to get it, we're going to do
            whatever we can to make sure we can help them. Anytime I look at the
            collateral of a deal and I'm looking to pledge the loan to the
            Federal Home Loan Bank of San Francisco, I know their requirements.
            They're always very upfront about what we can and cannot pledge, and
            if I have a question, I just call them. So they're always there for
            me, just like we're there for our customers, and I think that's the
            important part of the relationship.
          </p>
          <p>
            <strong
              >Michael Lasher, Chief Executive Officer in Community Commerce
              Bank:</strong
            >
            Our relationship with the Federal Home Loan Bank and the variety of
            products that they offer, from their grants that they do for
            low-income areas, first-time home buyers, funding projects that they
            have, their security safekeeping options, really gives us some
            strong tools in our toolbox to be able to play with so that we can
            be as helpful as possible to our community. The depth of the
            products that they have allows us to not just look at them as a
            short-term partner or just a long-term partner that is only a
            contingency plan. Like they're ingrained in our day-to-day
            operations and the management of the bank and the decisions that we
            make. Being able to help business owners, community members, that's
            what makes a difference to me.
            <br />
            We have the opportunity here to help families create generational
            wealth. Regardless of where the state of banking changes or the
            market changes, we will always be a mission-driven community bank
            here to help our community grow and prosper. The relationship that
            we have with the Federal Home Loan Bank of San Francisco allows us
            to stay focused on our relationships with our customers and our
            mission and have the flexibility to maneuver and work as the state
            of banking changes over the years.
          </p>
        </div>
        <aside class="shrink-0 self-start w-1 bg-blue-800 rounded h-[100px]"></aside>
      </article>
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
