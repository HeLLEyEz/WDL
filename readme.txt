@media (max-width: 768px) {
  body {
    font-size: 16px;  /* Adjust font size for smaller screens */
  }
  .navigation {
    display: none;  /* Hide navigation menu on small screens */
  }
}




<button onclick="changeColor()">Change Color</button>

<script>
function changeColor() {
  document.body.style.backgroundColor = "lightblue";
}
</script>
