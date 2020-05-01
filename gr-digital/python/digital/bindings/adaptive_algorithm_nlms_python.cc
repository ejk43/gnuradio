/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/adaptive_algorithm_nlms.h>
// pydoc.h is automatically generated in the build directory
#include <adaptive_algorithm_nlms_pydoc.h>

void bind_adaptive_algorithm_nlms(py::module& m)
{

    using adaptive_algorithm_nlms = ::gr::digital::adaptive_algorithm_nlms;


    py::class_<adaptive_algorithm_nlms,
               gr::digital::adaptive_algorithm,
               std::shared_ptr<adaptive_algorithm_nlms>>(
        m, "adaptive_algorithm_nlms", D(adaptive_algorithm_nlms))

        .def(py::init(&adaptive_algorithm_nlms::make),
             py::arg("cons"),
             py::arg("step_size"),
             D(adaptive_algorithm_nlms, make))


        .def("update_tap",
             &adaptive_algorithm_nlms::update_tap,
             py::arg("tap"),
             py::arg("in"),
             py::arg("error"),
             py::arg("decision"),
             D(adaptive_algorithm_nlms, update_tap))


        .def("update_taps",
             &adaptive_algorithm_nlms::update_taps,
             py::arg("taps"),
             py::arg("in"),
             py::arg("error"),
             py::arg("decision"),
             py::arg("num_taps"),
             D(adaptive_algorithm_nlms, update_taps))


        .def("initialize_taps",
             &adaptive_algorithm_nlms::initialize_taps,
             py::arg("taps"),
             D(adaptive_algorithm_nlms, initialize_taps))

        ;
}