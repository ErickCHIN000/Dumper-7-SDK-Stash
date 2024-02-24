#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// Function AmmoDisplayInterface.AmmoDisplayInterface_C.GetCurrentAmmoInfo
struct IAmmoDisplayInterface_C_GetCurrentAmmoInfo_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             AmmoIcon;                                          // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
	class FText                                  CurrentAmmo;                                       // 0x28(0x18)(Parm, OutParm)
	class FText                                  TotalAmmo;                                         // 0x40(0x18)(Parm, OutParm)
};

}
}


