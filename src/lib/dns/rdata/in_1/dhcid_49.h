// Copyright (C) 2011-2013  Internet Systems Consortium, Inc. ("ISC")
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

// BEGIN_HEADER_GUARD

#include <string>
#include <vector>

#include <dns/rdata.h>

// BEGIN_BUNDY_NAMESPACE

// BEGIN_COMMON_DECLARATIONS
// END_COMMON_DECLARATIONS

// BEGIN_RDATA_NAMESPACE

/// \brief \c rdata::DHCID class represents the DHCID RDATA as defined %in
/// RFC4701.
///
/// This class implements the basic interfaces inherited from the abstract
/// \c rdata::Rdata class, and provides trivial accessors specific to the
/// DHCID RDATA.
class DHCID : public Rdata {
public:
    // BEGIN_COMMON_MEMBERS
    // END_COMMON_MEMBERS

    /// \brief Return the digest.
    ///
    /// This method never throws an exception.
    const std::vector<uint8_t>& getDigest() const;

private:
    // helper for string and lexer constructors
    void constructFromLexer(MasterLexer& lexer);

    /// \brief Private data representation
    ///
    /// Opaque data at least 3 octets long as per RFC4701.
    ///
    std::vector<uint8_t> digest_;
};
// END_RDATA_NAMESPACE
// END_BUNDY_NAMESPACE
// END_HEADER_GUARD

// Local Variables: 
// mode: c++
// End: 
