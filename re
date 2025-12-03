<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width,initial-scale=1" />
  <title>Qiu — Portfolio</title>
  <meta name="description" content="Simple portfolio template for a developer/designer named Qiu." />

  <!-- Google Font -->
  <link href="https://fonts.googleapis.com/css2?family=Inter:wght@300;400;600;700&display=swap" rel="stylesheet">

  <style>
    :root{
      --bg:#0f1724; /* deep navy */
      --card:#0b1220;
      --muted:#9aa4b2;
      --accent:#6ee7b7;
      --glass: rgba(255,255,255,0.04);
      --radius:14px;
      color-scheme: dark;
    }
    *{box-sizing:border-box}
    html,body{height:100%;}
    body{
      margin:0;
      font-family:Inter,system-ui,-apple-system,"Segoe UI",Roboto,"Helvetica Neue",Arial;
      background:linear-gradient(180deg, #071027 0%, #071021 60%);
      color:#e6eef6;
      -webkit-font-smoothing:antialiased;
      -moz-osx-font-smoothing:grayscale;
      line-height:1.45;
      padding:32px;
    }

    /* Container */
    .wrap{max-width:980px;margin:0 auto}

    /* Header / nav */
    header{display:flex;align-items:center;justify-content:space-between;margin-bottom:32px}
    .brand{display:flex;gap:12px;align-items:center}
    .logo{width:48px;height:48px;border-radius:10px;background:linear-gradient(135deg,var(--accent),#60a5fa);display:flex;align-items:center;justify-content:center;font-weight:700;color:#072;letter-spacing:0.6px}
    nav a{color:var(--muted);text-decoration:none;margin-left:18px;font-weight:600}
    nav a:hover{color:var(--accent)}

    /* Hero */
    .hero{display:grid;grid-template-columns:1fr 320px;gap:28px;align-items:center;margin-bottom:26px}
    .hero-card{background:linear-gradient(180deg, rgba(255,255,255,0.02), transparent);padding:28px;border-radius:var(--radius);box-shadow:0 6px 20px rgba(2,6,23,0.6)}
    h1{margin:0 0 8px 0;font-size:28px}
    p.lead{color:var(--muted);margin:0 0 18px}
    .cta{display:inline-block;padding:10px 16px;border-radius:10px;background:var(--accent);color:#032; font-weight:700;text-decoration:none}

    /* profile */
    .profile{background:var(--card);padding:18px;border-radius:12px;text-align:center}
    .avatar{width:120px;height:120px;border-radius:16px;margin:0 auto 12px;display:block;background:linear-gradient(180deg,#253447,#0f1724);display:flex;align-items:center;justify-content:center;font-weight:700;color:var(--accent)}
    .small{font-size:13px;color:var(--muted)}

    /* Sections */
    section{margin:18px 0}
    .grid{display:grid;grid-template-columns:repeat(2,1fr);gap:16px}
    .card{background:var(--glass);padding:16px;border-radius:12px}
    .projects{display:grid;grid-template-columns:repeat(2,1fr);gap:12px}
    .project{background:linear-gradient(180deg, rgba(255,255,255,0.02), transparent);padding:12px;border-radius:10px}
    .skills{display:flex;gap:8px;flex-wrap:wrap}
    .skill{background:rgba(255,255,255,0.03);padding:8px 10px;border-radius:999px;font-weight:600;color:var(--muted);font-size:13px}

    /* Contact */
    form{display:grid;gap:10px}
    input,textarea{background:transparent;border:1px solid rgba(255,255,255,0.06);padding:10px;border-radius:8px;color:inherit;outline:none}
    input::placeholder, textarea::placeholder{color:rgba(255,255,255,0.25)}
    button{padding:10px 14px;border-radius:10px;border:0;background:var(--accent);color:#072;font-weight:700}

    /* Footer */
    footer{margin-top:28px;color:var(--muted);font-size:13px;text-align:center}

    /* Responsive */
    @media (max-width:880px){
      .hero{grid-template-columns:1fr;}
      .projects{grid-template-columns:1fr}
      .grid{grid-template-columns:1fr}
    }
  </style>
</head>
<body>
  <div class="wrap">
    <header>
      <div class="brand">
        <div class="logo">Q</div>
        <div>
          <div style="font-weight:700">Qiu</div>
          <div class="small">Developer • Designer</div>
        </div>
      </div>
      <nav>
        <a href="#about">About</a>
        <a href="#projects">Projects</a>
        <a href="#contact">Contact</a>
      </nav>
    </header>

    <main>
      <div class="hero">
        <div class="hero-card">
          <h1>Hi — I’m Qiu.</h1>
          <p class="lead">A front-end developer who builds simple, fast, and accessible web experiences. I enjoy turning design ideas into clean code.</p>
          <a class="cta" href="#contact">Work with me</a>

          <section id="about" style="margin-top:18px">
            <div class="card">
              <h3 style="margin:0 0 8px">About</h3>
              <p class="small">I focus on building responsive websites and small web apps. I like JavaScript, CSS, and progressive enhancement. When I'm not coding I read, make music, and experiment with photography.</p>
            </div>
          </section>

          <section style="margin-top:12px">
            <div class="grid">
              <div class="card">
                <h4 style="margin:0 0 8px">Experience</h4>
                <p class="small">2+ years building web interfaces. Worked with startups and solo projects.</p>
              </div>
              <div class="card">
                <h4 style="margin:0 0 8px">Contact</h4>
                <p class="small">Email: <a href="mailto:hello@qiu.example" style="color:var(--accent);text-decoration:none">hello@qiu.example</a></p>
              </div>
            </div>
          </section>
        </div>

        <aside class="profile">
          <div class="avatar">Q</div>
          <div style="font-weight:700">Qiu</div>
          <div class="small">Frontend Developer</div>
          <div style="margin-top:10px">
            <div class="small">Skills</div>
            <div class="skills" style="margin-top:8px">
              <div class="skill">HTML</div>
              <div class="skill">CSS</div>
              <div class="skill">JavaScript</div>
              <div class="skill">React</div>
            </div>
          </div>
        </aside>
      </div>

      <section id="projects">
        <h2 style="margin-bottom:8px">Projects</h2>
        <div class="projects">
          <article class="project">
            <h4 style="margin:0 0 6px">Project One</h4>
            <p class="small">A small interactive dashboard built with vanilla JS and Charting.</p>
            <p style="margin:8px 0 0"><a href="#" style="color:var(--accent);text-decoration:none">View →</a></p>
          </article>

          <article class="project">
            <h4 style="margin:0 0 6px">Project Two</h4>
            <p class="small">A landing page built with responsive CSS and accessibility in mind.</p>
            <p style="margin:8px 0 0"><a href="#" style="color:var(--accent);text-decoration:none">View →</a></p>
          </article>

          <article class="project">
            <h4 style="margin:0 0 6px">Project Three</h4>
            <p class="small">An open-source UI component library for small teams.</p>
            <p style="margin:8px 0 0"><a href="#" style="color:var(--accent);text-decoration:none">View →</a></p>
          </article>

          <article class="project">
            <h4 style="margin:0 0 6px">Project Four</h4>
            <p class="small">A tiny habit-tracking web app with local storage sync.</p>
            <p style="margin:8px 0 0"><a href="#" style="color:var(--accent);text-decoration:none">View →</a></p>
          </article>
        </div>
      </section>

      <section id="contact">
        <h2 style="margin-bottom:8px">Contact</h2>
        <div class="card">
          <form id="contactForm" action="mailto:hello@qiu.example" method="post" enctype="text/plain" onsubmit="return handleSubmit(event)">
            <input type="text" id="name" name="name" placeholder="Your name" required />
            <input type="email" id="email" name="email" placeholder="you@example.com" required />
            <textarea id="message" name="message" placeholder="Message" rows="5" required></textarea>
            <div style="display:flex;gap:8px;align-items:center">
              <button type="submit">Send</button>
              <div class="small">Or email directly: <a href="mailto:hello@qiu.example" style="color:var(--accent);text-decoration:none">hello@qiu.example</a></div>
            </div>
          </form>
        </div>
      </section>

    </main>

    <footer>
      <div class="small">© <span id="year"></span> Qiu — Built with ❤️ • <a href="#" style="color:var(--accent);text-decoration:none">GitHub</a></div>
    </footer>
  </div>

  <script>
    // small script: current year + form handling
    document.getElementById('year').textContent = new Date().getFullYear();

    function handleSubmit(e){
      // basic validation and friendly message — this form uses mailto so we just allow default behavior
      var name = document.getElementById('name').value.trim();
      var email = document.getElementById('email').value.trim();
      var message = document.getElementById('message').value.trim();
      if(!name || !email || !message){
        alert('Please complete all fields.');
        return false;
      }

      // If you want to integrate a real backend, replace this with fetch() to your API.
      alert('Thanks — your message will open in your email client.');
      return true; // allow mailto to open the user's client
    }
  </script>
</body>
</html>
