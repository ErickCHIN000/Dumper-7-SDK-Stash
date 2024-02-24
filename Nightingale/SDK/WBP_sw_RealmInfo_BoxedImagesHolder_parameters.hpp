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

// 0x1 (0x1 - 0x0)
// Function WBP_sw_RealmInfo_BoxedImagesHolder.WBP_sw_RealmInfo_BoxedImagesHolder_C.DisplayNoTextInfoAndContainer
struct UWBP_sw_RealmInfo_BoxedImagesHolder_C_DisplayNoTextInfoAndContainer_Params
{
public:
	bool                                         ShouldDisplay;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_sw_RealmInfo_BoxedImagesHolder.WBP_sw_RealmInfo_BoxedImagesHolder_C.AddImage
struct UWBP_sw_RealmInfo_BoxedImagesHolder_C_AddImage_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             NewParam;                                          // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_sw_RealmInfo_GenericImage_C*      CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                          CallFunc_AddChildToWrapBox_ReturnValue;            // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_sw_RealmInfo_BoxedImagesHolder.WBP_sw_RealmInfo_BoxedImagesHolder_C.ExecuteUbergraph_WBP_sw_RealmInfo_BoxedImagesHolder
struct UWBP_sw_RealmInfo_BoxedImagesHolder_C_ExecuteUbergraph_WBP_sw_RealmInfo_BoxedImagesHolder_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


