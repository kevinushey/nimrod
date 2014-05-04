context("hello")

test_that("nimrod can call a function returning a C string", {
  .Call("test_hello", PACKAGE="nimrod")
})
