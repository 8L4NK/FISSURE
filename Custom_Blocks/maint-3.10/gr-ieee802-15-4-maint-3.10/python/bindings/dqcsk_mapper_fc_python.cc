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
/* BINDTOOL_HEADER_FILE(dqcsk_mapper_fc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(79ce4101aa8adff7f5c594384703389e)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <ieee802_15_4/dqcsk_mapper_fc.h>
// pydoc.h is automatically generated in the build directory
#include <dqcsk_mapper_fc_pydoc.h>

void bind_dqcsk_mapper_fc(py::module& m)
{

    using dqcsk_mapper_fc    = ::gr::ieee802_15_4::dqcsk_mapper_fc;


    py::class_<dqcsk_mapper_fc, gr::block, gr::basic_block,
        std::shared_ptr<dqcsk_mapper_fc>>(m, "dqcsk_mapper_fc", D(dqcsk_mapper_fc))

        .def(py::init(&dqcsk_mapper_fc::make),
           py::arg("chirp_seq"),
           py::arg("time_gap_1"),
           py::arg("time_gap_2"),
           py::arg("len_subchirp"),
           py::arg("num_subchirp"),
           py::arg("nsym_frame"),
           D(dqcsk_mapper_fc,make)
        )
        



        ;




}








