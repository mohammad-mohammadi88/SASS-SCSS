@charset "UTF-8";
@font-face {
  font-family: Vazirmatn-Medium;
  src: url(../font/Vazirmatn-Medium.eot);
  src: url(../font/Vazirmatn-Medium.eot?#iefix) format("embedded-opentype"), url(../font/Vazirmatn-Medium.svg#Vazirmatn-Medium) format("svg"), url(../font/Vazirmatn-Medium.woff2) format("woff2");
  font-weight: 500;
}
body,
html {
  font-family: Vazirmatn-Medium;
  width: 100vw;
  overflow-X: hidden;
  background-color: #efefef;
}

* {
  padding: 0;
  margin: 0;
  list-style: none;
  -webkit-box-sizing: border-box;
          box-sizing: border-box;
}

a {
  text-decoration: none;
}

.container {
  max-width: 1200px;
  margin-right: auto;
  margin-left: auto;
  position: relative;
}

.row {
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
  -webkit-box-pack: center;
      -ms-flex-pack: center;
          justify-content: center;
  -ms-flex-wrap: wrap;
      flex-wrap: wrap;
}

[class*=col-] {
  padding: 0 16px;
}

.img-fluid {
  width: 100%;
  height: auto;
}

#menu .navbar {
  min-height: 20px;
  padding: 10px;
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
  -webkit-box-pack: justify;
      -ms-flex-pack: justify;
          justify-content: space-between;
  -webkit-box-align: center;
      -ms-flex-align: center;
          align-items: center;
}
#menu .navbar .list {
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
}
#menu .navbar .list li {
  position: relative;
  margin-right: 12px;
}
#menu .navbar .list li a {
  padding: 0 8px 0 8px;
  color: #000;
  font-weight: 500;
  font-size: 18px;
}
#menu .navbar .list li::before {
  content: "";
  position: absolute;
  bottom: 0;
  right: 0;
  left: 0;
  height: 2px;
  width: 0;
  background-color: rgb(54, 114, 228);
  -webkit-transition: width 0.3s ease-in-out;
  transition: width 0.3s ease-in-out;
}
#menu .navbar .list li:hover::before {
  width: 100%;
}
#menu .navbar .menu-icons {
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
}
#menu .navbar .menu-icons a {
  padding-left: 12px;
  color: #000;
}
#menu .navbar .menu-icons a:hover {
  color: orangered;
  -webkit-transition: 0.3s ease;
  transition: 0.3s ease;
}

#header div.row div.right {
  position: relative;
}
#header div.row div.right .gear-1 {
  -webkit-animation: round-clock 6s linear infinite;
          animation: round-clock 6s linear infinite;
  position: absolute;
  top: 55px;
  right: 70px;
  color: rgb(50, 50, 50);
}
#header div.row div.right .gear-2 {
  -webkit-animation: counter-clockwise 6s linear infinite;
          animation: counter-clockwise 6s linear infinite;
  position: absolute;
  top: 50px;
  right: 40px;
  color: rgb(75, 75, 75);
}
#header div.row div.right img.download {
  position: absolute;
  top: 40px;
  left: 30px;
}
#header div.row div.right img.download-1 {
  position: absolute;
  top: 60px;
  height: 40px;
  width: 32px;
  left: 54px;
  -webkit-animation: download 3s linear infinite;
          animation: download 3s linear infinite;
}
#header div.row div.right img.download-2 {
  position: absolute;
  top: 100px;
  width: 40px;
  height: 20px;
  left: 50px;
}
#header div.row div.right div.square1 {
  width: 25px;
  height: 25px;
  border-color: red;
  border-width: 2px;
  border-style: solid;
  top: 30px;
  right: 40%;
  position: absolute;
  -webkit-animation: round-clock 4s linear infinite;
          animation: round-clock 4s linear infinite;
}
#header div.row div.right div.square2 {
  width: 30px;
  height: 30px;
  border-color: lime;
  border-width: 2px;
  border-style: solid;
  top: 90%;
  right: 10%;
  position: absolute;
  -webkit-animation: round-clock 4s linear infinite;
          animation: round-clock 4s linear infinite;
}
#header div.row div.right div.square3 {
  width: 20px;
  height: 20px;
  border-color: red;
  border-width: 2px;
  border-style: solid;
  top: 80%;
  right: 80%;
  position: absolute;
  -webkit-animation: round-clock 4s linear infinite;
          animation: round-clock 4s linear infinite;
}
#header div.row div.left {
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
  -webkit-box-pack: center;
      -ms-flex-pack: center;
          justify-content: center;
  -webkit-box-align: space-between;
      -ms-flex-align: space-between;
          align-items: space-between;
  -webkit-box-orient: vertical;
  -webkit-box-direction: normal;
      -ms-flex-direction: column;
          flex-direction: column;
  padding-left: 30px;
  text-align: center;
}
#header div.row div.left p {
  margin-top: 3rem;
  font-size: x-large;
}

#course {
  background-color: #c7cbee;
  max-width: 100%;
  border-radius: 500px;
  min-height: 200px;
  -webkit-transform: translate(-10%, 150px);
          transform: translate(-10%, 150px);
}
#course div.row {
  -webkit-transform: translateX(100px);
          transform: translateX(100px);
}
#course div.row .card {
  position: relative;
  -webkit-transform: translateY(-150px);
          transform: translateY(-150px);
  width: 27%;
}
#course div.row .card::before {
  content: url(../img/وحید\ صالحی.jpeg);
  position: absolute;
  z-index: -1;
  top: -30px;
  width: 5px;
  height: 5px;
  -webkit-transition: 0.3s ease;
  transition: 0.3s ease;
}
#course div.row .card:hover::before {
  content: url(../img/وحید\ صالحی.jpeg);
  top: -38px;
}
#course div.row .card::after {
  content: "استاد:وحید صالحی";
  top: -30px;
  position: absolute;
  -webkit-transition: 0.3s ease;
  transition: 0.3s ease;
  opacity: 0;
  right: 50px;
}
#course div.row .card:hover::after {
  content: "استاد:وحید صالحی";
  top: -30px;
  position: absolute;
  -webkit-transition: 0.3s ease;
  transition: 0.3s ease;
  opacity: 1;
  right: 60px;
}
#course div.row .card a.card-link .card-body {
  background-color: #fff;
  -webkit-box-shadow: 0 0 1px 0 #808080;
          box-shadow: 0 0 1px 0 #808080;
  z-index: 999;
  border-radius: 0 0 7px 7px;
  border-bottom: 4px solid red;
}
#course div.row .card a.card-link .card-body div {
  color: #000;
}
#course div.row .card a.card-link .card-body:hover {
  -webkit-box-shadow: 0 0 20px 0px #808080;
          box-shadow: 0 0 20px 0px #808080;
  -webkit-transition: 0.3s ease;
  transition: 0.3s ease;
}
#course div.row .card a.card-link .card-body .card-title {
  padding: 10px 15px;
  border-bottom: 1px solid gray;
}
#course div.row .card a.card-link .card-body .card-footer {
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
  -webkit-box-pack: justify;
      -ms-flex-pack: justify;
          justify-content: space-between;
  -webkit-box-align: center;
      -ms-flex-align: center;
          align-items: center;
  padding: 10px 10px;
}

#other div.row div.path {
  -ms-flex-wrap: wrap;
      flex-wrap: wrap;
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
  padding: 2rem 1rem;
}
#other div.row div.path .right img {
  height: 40vh;
}
#other div.row div.path .left {
  -webkit-box-orient: vertical;
  -webkit-box-direction: normal;
      -ms-flex-direction: column;
          flex-direction: column;
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
  -webkit-box-pack: center;
      -ms-flex-pack: center;
          justify-content: center;
  -webkit-box-align: center;
      -ms-flex-align: center;
          align-items: center;
}
#other div.row div.path .left h2 {
  font-size: 1.75rem;
  text-align: center;
}
#other div.row div.path .left p {
  padding: 40px 20px;
  font-size: 1.25rem;
  text-align: center;
}
#other div.row div.path .left-2 img {
  height: 40vh;
}
#other div.row div.path .right-2 {
  -webkit-box-orient: vertical;
  -webkit-box-direction: normal;
      -ms-flex-direction: column;
          flex-direction: column;
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
  -webkit-box-pack: center;
      -ms-flex-pack: center;
          justify-content: center;
  -webkit-box-align: center;
      -ms-flex-align: center;
          align-items: center;
}
#other div.row div.path .right-2 h2 {
  font-size: 1.75rem;
}
#other div.row div.path .right-2 p {
  padding: 40px 20px;
  font-size: 1.25rem;
  text-align: center;
}

#topic {
  width: 100%;
  -webkit-box-sizing: border-box;
          box-sizing: border-box;
}
#topic div.path-body {
  overflow: hidden;
  position: relative;
  cursor: pointer;
  border: 1px solid rgb(181, 179, 179);
  margin: 16px;
  height: 150px;
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
}
#topic div.path-body::before {
  content: "";
  height: 200px;
  width: 25px;
  position: absolute;
  top: -9px;
  right: 18.5%;
  -webkit-transform: rotate(7deg);
          transform: rotate(7deg);
  z-index: 100;
  background-color: #efefef;
}
#topic div.path-body:hover div.img-overflow {
  opacity: 0.6;
}
#topic div.path-body img.topic-img {
  width: 20%;
  -webkit-box-flex: 20%;
      -ms-flex: 20%;
          flex: 20%;
  height: 150;
  margin-left: 30px;
  position: relative;
}
#topic div.path-body div.img-overflow {
  width: 20%;
  -webkit-box-flex: 20%;
      -ms-flex: 20%;
          flex: 20%;
  position: absolute;
  height: 150px;
  top: 0;
  right: 0;
  background-color: #000000;
  z-index: 99;
  opacity: 0;
  -webkit-transition: 0.6s ease;
  transition: 0.6s ease;
}
#topic div.path-body div.information-topic {
  padding-top: 10px;
  width: 80%;
  -webkit-box-flex: 80%;
      -ms-flex: 80%;
          flex: 80%;
}
#topic div.path-body div.information-topic button {
  color: #fff;
  font-weight: 500;
  font-size: 16px;
  font-family: Vazirmatn-Medium;
  padding: 5px 5px;
  border: none;
  border-radius: 5px;
  background-color: green;
  position: absolute;
  left: 10px;
  bottom: 10px;
}

@-webkit-keyframes round-clock {
  from {
    -webkit-transform: rotate(0deg);
            transform: rotate(0deg);
  }
  to {
    -webkit-transform: rotate(360deg);
            transform: rotate(360deg);
  }
}

@keyframes round-clock {
  from {
    -webkit-transform: rotate(0deg);
            transform: rotate(0deg);
  }
  to {
    -webkit-transform: rotate(360deg);
            transform: rotate(360deg);
  }
}
@-webkit-keyframes counter-clockwise {
  from {
    -webkit-transform: rotate(0deg);
            transform: rotate(0deg);
  }
  to {
    -webkit-transform: rotate(-360deg);
            transform: rotate(-360deg);
  }
}
@keyframes counter-clockwise {
  from {
    -webkit-transform: rotate(0deg);
            transform: rotate(0deg);
  }
  to {
    -webkit-transform: rotate(-360deg);
            transform: rotate(-360deg);
  }
}
@-webkit-keyframes download {
  0% {
    -webkit-transform: translateY(-10px);
            transform: translateY(-10px);
  }
  50% {
    -webkit-transform: translateY(0);
            transform: translateY(0);
  }
  100% {
    -webkit-transform: translateY(-10px);
            transform: translateY(-10px);
  }
}
@keyframes download {
  0% {
    -webkit-transform: translateY(-10px);
            transform: translateY(-10px);
  }
  50% {
    -webkit-transform: translateY(0);
            transform: translateY(0);
  }
  100% {
    -webkit-transform: translateY(-10px);
            transform: translateY(-10px);
  }
}
@media screen and (max-width: 768px) {
  header#header div.right {
    width: 100%;
  }
  header#header div.left {
    margin-bottom: 200px;
  }
  main#course {
    padding: 30px;
    border-radius: 0 !important;
    height: auto;
    -webkit-transform: translate(0, 0) !important;
            transform: translate(0, 0) !important;
  }
  main#course div.row {
    -webkit-transform: translate(0);
            transform: translate(0);
  }
  main#course div.row .card {
    -webkit-transform: translate(0);
            transform: translate(0);
    width: 51%;
    margin: 45px;
  }
  main#course div.row .card::before {
    content: url(../img/وحید\ صالحی2.jpg);
    position: absolute;
    z-index: -1;
    top: -30px;
    width: 5px;
    height: 5px;
    -webkit-transition: 0.3s ease;
    transition: 0.3s ease;
  }
  main#course div.row .card:hover::before {
    content: url(../img/وحید\ صالحی2.jpg);
    top: -38px;
  }
  main#course div.row .card .card-body {
    border-radius: 7px;
  }
  main#course div.row .card .card-body img {
    border-radius: 7px 7px 0 0;
    -webkit-transform: translateY(-3px);
            transform: translateY(-3px);
  }
  .col-sm-1 {
    width: 8.3333333333%;
  }
  .col-sm-2 {
    width: 16.6666666667%;
  }
  .col-sm-3 {
    width: 25%;
  }
  .col-sm-4 {
    width: 33.3333333333%;
  }
  .col-sm-5 {
    width: 41.6666666667%;
  }
  .col-sm-6 {
    width: 50%;
  }
  .col-sm-7 {
    width: 58.3333333333%;
  }
  .col-sm-8 {
    width: 66.6666666667%;
  }
  .col-sm-9 {
    width: 75%;
  }
  .col-sm-10 {
    width: 83.3333333333%;
  }
  .col-sm-11 {
    width: 91.6666666667%;
  }
  .col-sm-12 {
    width: 100%;
  }
  #other div.path {
    width: 50%;
    border-top: 1px solid #4b4b4b;
    border-bottom: 1px solid #4b4b4b;
    border-left: 1px solid #4b4b4b;
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
  }
  #other div.path .left-2 {
    -webkit-box-ordinal-group: 1;
        -ms-flex-order: 0;
            order: 0;
  }
  #other div.path .right-2 {
    -webkit-box-ordinal-group: 2;
        -ms-flex-order: 1;
            order: 1;
  }
}
@media screen and (max-width: 567px) {
  .navbar ul.list {
    margin: auto;
    padding-right: 0;
    -webkit-transform: translateX(20px);
            transform: translateX(20px);
  }
  .navbar .menu-icons a {
    display: none;
  }
  div.path {
    width: 100% !important;
  }
}
@media screen and (min-width: 769px) {
  .col-md-1 {
    width: 8.3333333333%;
  }
  .col-md-2 {
    width: 16.6666666667%;
  }
  .col-md-3 {
    width: 25%;
  }
  .col-md-4 {
    width: 33.3333333333%;
  }
  .col-md-5 {
    width: 41.6666666667%;
  }
  .col-md-6 {
    width: 50%;
  }
  .col-md-7 {
    width: 58.3333333333%;
  }
  .col-md-8 {
    width: 66.6666666667%;
  }
  .col-md-9 {
    width: 75%;
  }
  .col-md-10 {
    width: 83.3333333333%;
  }
  .col-md-11 {
    width: 91.6666666667%;
  }
  .col-md-12 {
    width: 100%;
  }
}
@media screen and (min-width: 993px) {
  #topic .path {
    width: 50% !important;
  }
}/*# sourceMappingURL=style.c.map */