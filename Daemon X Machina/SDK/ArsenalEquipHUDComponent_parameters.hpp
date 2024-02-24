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

// 0xD8 (0xD8 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_SetToWidgets
struct UArsenalEquipHUDComponent_C_SetPartsInfo_SetToWidgets_Params
{
public:
	class FText                                  ItemName;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Row1Name;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Row1Value;                                         // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Row2Name;                                          // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Row2Value;                                         // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Row3Name;                                          // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Row3Value;                                         // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Row4Name;                                          // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Row4Value;                                         // 0xC0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_Weapon
struct UArsenalEquipHUDComponent_C_SetPartsInfo_Weapon_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_ArmLeft
struct UArsenalEquipHUDComponent_C_SetPartsInfo_ArmLeft_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_ArmRight
struct UArsenalEquipHUDComponent_C_SetPartsInfo_ArmRight_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_Legs
struct UArsenalEquipHUDComponent_C_SetPartsInfo_Legs_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_Head
struct UArsenalEquipHUDComponent_C_SetPartsInfo_Head_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo
struct UArsenalEquipHUDComponent_C_SetPartsInfo_Params
{
public:
	enum class ETTLInventoryCategory             Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PartsID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PageCurrent;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PageMax;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ValueCurrent;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ValueMax;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.DegreeToCategory
struct UArsenalEquipHUDComponent_C_DegreeToCategory_Params
{
public:
	float                                        Degree;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLInventoryCategory             Result;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Deg;                                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetCurrentCategory
struct UArsenalEquipHUDComponent_C_SetCurrentCategory_Params
{
public:
	enum class ETTLInventoryCategory             NewCurrentCategory;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetCategoryButtonUV
struct UArsenalEquipHUDComponent_C_SetCategoryButtonUV_Params
{
public:
	class UButton*                               Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        U;                                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        V;                                                 // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.GetHUDCategoryParam
struct UArsenalEquipHUDComponent_C_GetHUDCategoryParam_Params
{
public:
	enum class ETTLInventoryCategory             Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_754[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEquipmentHUDParamStruct              HUDParam;                                          // 0x8(0x20)(Parm, OutParm, HasGetValueTypeHash)
	struct FEquipmentHUDParamStruct              ReturnVal;                                         // 0x28(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetCellCategory
struct UArsenalEquipHUDComponent_C_SetCellCategory_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLInventoryCategory             Category;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.IsVisible
struct UArsenalEquipHUDComponent_C_IsVisible_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


