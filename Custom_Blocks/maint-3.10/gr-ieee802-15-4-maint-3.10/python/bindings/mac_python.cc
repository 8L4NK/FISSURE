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
/* BINDTOOL_HEADER_FILE(mac.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(20865c9e47bd515b82165e634cad196b)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <ieee802_15_4/mac.h>
// pydoc.h is automatically generated in the build directory
#include <mac_pydoc.h>

void bind_mac(py::module& m)
{

    using mac    = ::gr::ieee802_15_4::mac;


    py::class_<mac, gr::block, gr::basic_block,
        std::shared_ptr<mac>>(m, "mac", D(mac))

        .def(py::init(&mac::make),
           py::arg("debug") = false,
           py::arg("fcf") = 34881,
           py::arg("seq_nr") = 0,
           py::arg("dst_pan") = 6826,
           py::arg("dst") = 65535,
           py::arg("src") = 13124,
           D(mac,make)
        )
        


        
        .def("get_num_packet_errors",&mac::get_num_packet_errors,       
            D(mac,get_num_packet_errors)
        )


        
        .def("get_num_packets_received",&mac::get_num_packets_received,       
            D(mac,get_num_packets_received)
        )


        
        .def("get_packet_error_ratio",&mac::get_packet_error_ratio,       
            D(mac,get_packet_error_ratio)
        )



        ;




}








