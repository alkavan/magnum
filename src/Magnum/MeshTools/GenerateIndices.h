#ifndef Magnum_MeshTools_GenerateIndices_h
#define Magnum_MeshTools_GenerateIndices_h
/*
    This file is part of Magnum.

    Copyright © 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019
              Vladimír Vondruš <mosra@centrum.cz>

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

/** @file
 * @brief Function @ref Magnum::MeshTools::generateLineStripIndices(), @ref Magnum::MeshTools::generateLineStripIndicesInto(), @ref Magnum::MeshTools::generateLineLoopIndices(), @ref Magnum::MeshTools::generateLineLoopIndicesInto(), @ref Magnum::MeshTools::generateTriangleStripIndices(), @ref Magnum::MeshTools::generateTriangleStripIndicesInto(), @ref Magnum::MeshTools::generateTriangleFanIndices(), @ref Magnum::MeshTools::generateTriangleFanIndicesInto()
 * @m_since_latest
 */

#include "Magnum/Magnum.h"
#include "Magnum/MeshTools/visibility.h"

namespace Magnum { namespace MeshTools {

/**
@brief Create index buffer for a line strip primitive
@m_since_latest

Can be used to convert a @ref MeshPrimitive::LineStrip mesh to
@ref MeshPrimitive::Lines. The @p vertexCount is expected to be at least
@cpp 2 @ce. Primitive restart is not supported.
@see @ref generateLineStripIndicesInto(), @ref generateLineLoopIndices(),
    @ref generateTriangleStripIndices(), @ref generateTriangleFanIndices()
*/
MAGNUM_MESHTOOLS_EXPORT Containers::Array<UnsignedInt> generateLineStripIndices(UnsignedInt vertexCount);

/**
@brief Create index buffer for a line strip primitive into an existing array
@m_since_latest

A variant of @ref generateLineStripIndicesInto() that fills existing memory
instead of allocating a new array. The @p vertexCount is expected to be at
least @cpp 2 @ce, the @p indices array is expected to have a size of
@cpp 2*(vertexCount - 1) @ce. Primitive restart is not supported.
*/
MAGNUM_MESHTOOLS_EXPORT void generateLineStripIndicesInto(UnsignedInt vertexCount, const Containers::StridedArrayView1D<UnsignedInt>& indices);

/**
@brief Create index buffer for a line loop primitive
@m_since_latest

Can be used to convert a @ref MeshPrimitive::LineLoop mesh to
@ref MeshPrimitive::Lines. The @p vertexCount is expected to be at least
@cpp 2 @ce. Primitive restart is not supported.
@see @ref generateLineLoopIndicesInto(), @ref generateLineStripIndices(),
    @ref generateTriangleStripIndices(), @ref generateTriangleFanIndices()
*/
MAGNUM_MESHTOOLS_EXPORT Containers::Array<UnsignedInt> generateLineLoopIndices(UnsignedInt vertexCount);

/**
@brief Create index buffer for a line loop primitive into an existing array
@m_since_latest

A variant of @ref generateLineLoopIndicesInto() that fills existing memory
instead of allocating a new array. The @p vertexCount is expected to be at
least @cpp 2 @ce, the @p indices array is expected to have a size of
@cpp 2*vertexCount @ce. Primitive restart is not supported.
*/
MAGNUM_MESHTOOLS_EXPORT void generateLineLoopIndicesInto(UnsignedInt vertexCount, const Containers::StridedArrayView1D<UnsignedInt>& into);

/**
@brief Create index buffer for a triangle strip primitive
@m_since_latest

Can be used to convert a @ref MeshPrimitive::TriangleStrip mesh to
@ref MeshPrimitive::Triangles. The @p vertexCount is expected to be at least
@cpp 3 @ce. Primitive restart is not supported.
@see @ref generateTriangleStripIndicesInto(), @ref generateLineStripIndices(),
    @ref generateLineLoopIndices(), @ref generateTriangleFanIndices()
*/
MAGNUM_MESHTOOLS_EXPORT Containers::Array<UnsignedInt> generateTriangleStripIndices(UnsignedInt vertexCount);

/**
@brief Create index buffer for a triangle strip primitive into an existing array
@m_since_latest

A variant of @ref generateTriangleStripIndicesInto() that fills existing memory
instead of allocating a new array. The @p vertexCount is expected to be at
least @cpp 3 @ce, the @p indices array is expected to have a size of
@cpp 3*(vertexCount - 2) @ce. Primitive restart is not supported.
*/
MAGNUM_MESHTOOLS_EXPORT void generateTriangleStripIndicesInto(UnsignedInt vertexCount, const Containers::StridedArrayView1D<UnsignedInt>& into);

/**
@brief Create index buffer for a triangle fan primitive
@m_since_latest

Can be used to convert a @ref MeshPrimitive::TriangleFan mesh to
@ref MeshPrimitive::Triangles. The @p vertexCount is expected to be at least
@cpp 3 @ce. Primitive restart is not supported.
@see @ref generateTriangleFanIndicesInto(), @ref generateLineStripIndices(),
    @ref generateLineLoopIndices(), @ref generateTriangleStripIndices()
*/
MAGNUM_MESHTOOLS_EXPORT Containers::Array<UnsignedInt> generateTriangleFanIndices(UnsignedInt vertexCount);

/**
@brief Create index buffer for a triangle fan primitive into an existing array
@m_since_latest

A variant of @ref generateTriangleFanIndicesInto() that fills existing memory
instead of allocating a new array. The @p vertexCount is expected to be at
least @cpp 3 @ce, the @p indices array is expected to have a size of
@cpp 3*(vertexCount - 2) @ce. Primitive restart is not supported.
*/
MAGNUM_MESHTOOLS_EXPORT void generateTriangleFanIndicesInto(UnsignedInt vertexCount, const Containers::StridedArrayView1D<UnsignedInt>& into);

}}

#endif