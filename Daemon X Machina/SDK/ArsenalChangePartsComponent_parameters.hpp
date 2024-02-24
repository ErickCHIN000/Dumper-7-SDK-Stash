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

// 0x1308 (0x1308 - 0x0)
// Function ArsenalChangePartsComponent.ArsenalChangePartsComponent_C.OverrideArsenalPartsPaintInfo
struct UArsenalChangePartsComponent_C_OverrideArsenalPartsPaintInfo_Params
{
public:
	enum class ETTLPartsType                     PartsType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLArsenalPartsPaintInfo             OverridePaintInfo;                                 // 0x8(0x98)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPaintInfo                  ArsenalPaintInfo;                                  // 0xA0(0x310)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8F[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLArsenalPaintInfo                  K2Node_MakeStruct_TTLArsenalPaintInfo;             // 0x3B8(0x310)(NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPaintInfo                  K2Node_MakeStruct_TTLArsenalPaintInfo1;            // 0x6C8(0x310)(NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPaintInfo                  K2Node_MakeStruct_TTLArsenalPaintInfo2;            // 0x9D8(0x310)(NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPaintInfo                  K2Node_MakeStruct_TTLArsenalPaintInfo3;            // 0xCE8(0x310)(NoDestructor, HasGetValueTypeHash)
	struct FTTLArsenalPaintInfo                  K2Node_MakeStruct_TTLArsenalPaintInfo4;            // 0xFF8(0x310)(NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function ArsenalChangePartsComponent.ArsenalChangePartsComponent_C.ChangeParts
struct UArsenalChangePartsComponent_C_ChangeParts_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLPartsType                     PartsType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLArsenalPartsInfo                  ChangePartsInfo;                                   // 0x10(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsOverridePaintInfo;                               // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9E[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLArsenalPartsPaintInfo             OverridePaintInfo;                                 // 0x50(0x98)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function ArsenalChangePartsComponent.ArsenalChangePartsComponent_C.ExecuteUbergraph_ArsenalChangePartsComponent
struct UArsenalChangePartsComponent_C_ExecuteUbergraph_ArsenalChangePartsComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


