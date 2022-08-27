/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(frame_equalizer.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(16ff5ed7a4d765b220d8e93bba89c627)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <ieee802_11/frame_equalizer.h>
// pydoc.h is automatically generated in the build directory
#include <frame_equalizer_pydoc.h>

void bind_frame_equalizer(py::module& m)
{

    using frame_equalizer    = ::gr::ieee802_11::frame_equalizer;


    py::class_<frame_equalizer, gr::block, gr::basic_block,
        std::shared_ptr<frame_equalizer>>(m, "frame_equalizer", D(frame_equalizer))

        .def(py::init(&frame_equalizer::make),
           py::arg("algo"),
           py::arg("freq"),
           py::arg("bw"),
           py::arg("log"),
           py::arg("debug"),
           D(frame_equalizer,make)
        )
        




        
        .def("set_algorithm",&frame_equalizer::set_algorithm,       
            py::arg("algo"),
            D(frame_equalizer,set_algorithm)
        )


        
        .def("set_bandwidth",&frame_equalizer::set_bandwidth,       
            py::arg("bw"),
            D(frame_equalizer,set_bandwidth)
        )


        
        .def("set_frequency",&frame_equalizer::set_frequency,       
            py::arg("freq"),
            D(frame_equalizer,set_frequency)
        )

        ;

    py::enum_<::gr::ieee802_11::Equalizer>(m,"Equalizer")
        .value("LS", ::gr::ieee802_11::LS) // 0
        .value("LMS", ::gr::ieee802_11::LMS) // 1
        .value("COMB", ::gr::ieee802_11::COMB) // 2
        .value("STA", ::gr::ieee802_11::STA) // 3
        .export_values()
    ;

    py::implicitly_convertible<int, ::gr::ieee802_11::Equalizer>();



}








