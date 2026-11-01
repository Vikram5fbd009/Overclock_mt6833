<!DOCTYPE html>
<html class="gl-system" lang="en">
<head>
<meta content="width=device-width, initial-scale=1" name="viewport">
<title>Not Found</title>
<script nonce="74SkWRzCYohlIuL092zh6Q==">
//<![CDATA[
const root = document.documentElement;
if (window.matchMedia('(prefers-color-scheme: dark)').matches) {
  root.classList.add('gl-dark');
}

window.matchMedia('(prefers-color-scheme: dark)').addEventListener('change', (e) => {
  if (e.matches) {
    root.classList.add('gl-dark');
  } else {
    root.classList.remove('gl-dark');
  }
});

//]]>
</script>
<link rel="stylesheet" href="/assets/errors-cc438031220058b8f0e7ca33ccb63608311320e60955743e55ba38f07db1400a.css" />
<link rel="stylesheet" href="/assets/application-eb10dc3ef80afe32479355862648e733288b6a9bf9337e9c2d2dc72e41fbfdd5.css" />
<link rel="stylesheet" href="/assets/fonts-deb7ad1d55ca77c0172d8538d53442af63604ff490c74acc2859db295c125bdb.css" />
<link rel="stylesheet" href="/assets/tailwind-37b2f1797747fac2cfa1bcc603e5c2c8b39bf0f039292797168d7ca9899ec776.css" />
</head>
<body>
<div class="page-container">
<div class="error-container">
<img alt="404" src="/assets/illustrations/error/error-404-lg-52d9b54aa7ded080374127237cf1530e5d936fe11b052d5c173372afdfcf6430.svg" />
<h1>
404: Page not found
</h1>
<p>
Make sure the address is correct and the page has not moved.
Please contact your GitLab administrator if you think this is a mistake.
</p>
<div class="action-container">
<form class="form-inline-flex" action="/search" accept-charset="UTF-8" method="get"><div class="field">
<input type="search" name="search" id="search" value="" placeholder="Search for projects, issues, etc." class="form-control gl-rounded-lg" />
</div>
<button type="submit" class="gl-button btn btn-md btn-confirm "><span class="gl-button-text">
Search

</span>

</button></form></div>
<nav>
<ul class="error-nav">
<li>
<a href="/">Home</a>
</li>
<li>
<a href="/users/sign_in?redirect_to_referer=yes">Sign In / Register</a>
</li>
<li>
<a href="/help">Help</a>
</li>
</ul>
</nav>

</div>

</div>
<script nonce="74SkWRzCYohlIuL092zh6Q==">
//<![CDATA[
(function(){
  var goBackElement = document.querySelector('.js-go-back');

  if (goBackElement && history.length > 1) {
    goBackElement.removeAttribute('hidden');

    goBackElement.querySelector('button').addEventListener('click', function() {
      history.back();
    });
  }

  // We do not have rails_ujs here, so we're manually making a link trigger a form submit.
  document.querySelector('.js-sign-out-link')?.addEventListener('click', (e) => {
    e.preventDefault();
    document.querySelector('.js-sign-out-form')?.submit();
  });
}());

//]]>
</script></body>
</html>
