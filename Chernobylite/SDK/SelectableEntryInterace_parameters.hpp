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

// 0x4 (0x4 - 0x0)
// Function SelectableEntryInterace.SelectableEntryInterace_C.SetEntryIndex
struct ISelectableEntryInterace_C_SetEntryIndex_Params
{
public:
	int32                                        EntryIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SelectableEntryInterace.SelectableEntryInterace_C.GetEntryIndex
struct ISelectableEntryInterace_C_GetEntryIndex_Params
{
public:
	int32                                        EntryIndex;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function SelectableEntryInterace.SelectableEntryInterace_C.SetSelectableEntryOwner
struct ISelectableEntryInterace_C_SetSelectableEntryOwner_Params
{
public:
	TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function SelectableEntryInterace.SelectableEntryInterace_C.Select
struct ISelectableEntryInterace_C_Select_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PostSoundEvent;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


