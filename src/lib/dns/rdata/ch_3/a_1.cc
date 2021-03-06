// Copyright (C) 2010-2013  Internet Systems Consortium, Inc. ("ISC")
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
// REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
// INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
// LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
// OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
// PERFORMANCE OF THIS SOFTWARE.

#include <string>

#include <exceptions/exceptions.h>

#include <util/buffer.h>
#include <dns/messagerenderer.h>
#include <dns/rdata.h>
#include <dns/rdataclass.h>

using namespace std;
using namespace bundy::util;

// BEGIN_BUNDY_NAMESPACE
// BEGIN_RDATA_NAMESPACE

A::A(const std::string&) {
    // TBD
}

A::A(MasterLexer&, const Name*,
     MasterLoader::Options, MasterLoaderCallbacks&)
{
    // TBD
}

A::A(InputBuffer&, size_t) {
    // TBD
}

A::A(const A&) : Rdata() {
    // TBD
}

void
A::toWire(OutputBuffer&) const {
    // TBD
}

void
A::toWire(AbstractMessageRenderer&) const {
    // TBD
}

string
A::toText() const {
    // TBD
    bundy_throw(InvalidRdataText, "Not implemented yet");
}

int
A::compare(const Rdata&) const {
    return (0);                 // dummy.  TBD
}

// END_RDATA_NAMESPACE
// END_BUNDY_NAMESPACE
