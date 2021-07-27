/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef MU_PALETTE_PALETTECREATOR_H
#define MU_PALETTE_PALETTECREATOR_H

#include "palettetree.h"

#include "modularity/ioc.h"
#include "ipaletteconfiguration.h"

namespace mu::palette {
class PaletteCreator
{
    INJECT_STATIC(palette, IPaletteConfiguration, configuration)

public:
    static PalettePtr newTempoPalette(bool defaultPalette = false);
    static PalettePtr newTextPalette(bool defaultPalette = false);
    static PalettePtr newTimePalette();
    static PalettePtr newRepeatsPalette();
    static PalettePtr newBeamPalette();
    static PalettePtr newDynamicsPalette(bool defaultPalette = false);
    static PalettePtr newLayoutPalette();
    static PalettePtr newFingeringPalette();
    static PalettePtr newTremoloPalette();
    static PalettePtr newNoteHeadsPalette();
    static PalettePtr newArticulationsPalette();
    static PalettePtr newOrnamentsPalette();
    static PalettePtr newAccordionPalette();
    static PalettePtr newBracketsPalette();
    static PalettePtr newBreathPalette();
    static PalettePtr newArpeggioPalette();
    static PalettePtr newClefsPalette(bool defaultPalette = false);
    static PalettePtr newGraceNotePalette();
    static PalettePtr newBagpipeEmbellishmentPalette();
    static PalettePtr newKeySigPalette();
    static PalettePtr newAccidentalsPalette(bool defaultPalette = false);
    static PalettePtr newBarLinePalette();
    static PalettePtr newLinesPalette();
    static PalettePtr newFretboardDiagramPalette();

    static PaletteTreePtr newMasterPaletteTree();
    static PaletteTreePtr newDefaultPaletteTree();
};
}

#endif // MU_PALETTE_PALETTECREATOR_H
