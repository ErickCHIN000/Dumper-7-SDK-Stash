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
// Function BP_AntizeInterface.BP_AntizeInterface_C.MSG_IsKeyEditing
struct IBP_AntizeInterface_C_MSG_IsKeyEditing_Params
{
public:
	bool                                         Editing_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_AntizeInterface.BP_AntizeInterface_C.MSG_ChangeGameplaySetting
struct IBP_AntizeInterface_C_MSG_ChangeGameplaySetting_Params
{
public:
	enum class E_TemplateUI                      Setting;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1718[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Value;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_AntizeInterface.BP_AntizeInterface_C.MSG_RequestKey
struct IBP_AntizeInterface_C_MSG_RequestKey_Params
{
public:
	bool                                         Action_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_TemplateControlAction           ActionName;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TemplateControlAxis             AxisName;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1775[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           MyKey;                                             // 0x8(0x20)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_AntizeInterface.BP_AntizeInterface_C.MSG_ChangeInvertMouse
struct IBP_AntizeInterface_C_MSG_ChangeInvertMouse_Params
{
public:
	bool                                         InvertMouse;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_AntizeInterface.BP_AntizeInterface_C.MSG_ChangeSensitivity
struct IBP_AntizeInterface_C_MSG_ChangeSensitivity_Params
{
public:
	float                                        Sensitivity;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


