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

// 0x98 (0x98 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Decompile WeaponCode
struct UModularWeaponTools_C_Decompile_WeaponCode_Params
{
public:
	class FString                                Weapon_Code;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Weapon_Type;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        Weapon_Parts;                                      // 0x28(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class FString>                        Weapon_Materials;                                  // 0x38(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class FString>                        Local_WeaponMats;                                  // 0x48(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                        Local_WeaponParts;                                 // 0x58(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames; // 0x68(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts;   // 0x78(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Type_from_WeaponCode_Weapon_Type;     // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x2D8 (0x2D8 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Random WeaponCode (Advanced)
struct UModularWeaponTools_C_Random_WeaponCode__Advanced__Params
{
public:
	class FString                                Weapon_Code;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        Optional_Parts_Weight;                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Random_Type;                                       // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Random_Parts;                                      // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Random_Materials;                                  // 0x16(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14C6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                WeaponCode;                                        // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Unfiltered_Weapon_Parts_Array;                     // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                New_Weapon_Type;                                   // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Output_String;                                     // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Filtered_Weapon_Parts_Array;                       // 0x60(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames; // 0x70(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts;   // 0x80(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Random_Weapon_Type_Weapon_Type;           // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Type_from_WeaponCode_Weapon_Type;     // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_150B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_151B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue_2;               // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1521[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue_3;               // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FWeaponPart                           CallFunc_Array_Get_Item_2;                         // 0x168(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_1525[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1527[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Random_Weapon_Part_PartString;            // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1531[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<enum class EMaterialSlot>             CallFunc_Get_MaterialSlots_of_WeaponType_Slots;    // 0x200(0x10)(ReferenceParm, HasGetValueTypeHash)
	enum class EMaterialSlot                     CallFunc_Array_Get_Item_3;                         // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_153D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMaterialSet                          CallFunc_Random_MaterialSet_of_Slot_Material_Set;  // 0x218(0x44)(HasGetValueTypeHash)
	uint8                                        Pad_1543[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Random_MaterialSet_of_Slot_Material_ShortName; // 0x260(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_154B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponPart>                   Temp_struct_Variable;                              // 0x278(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x298(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   CallFunc_Filter_Weapon_Parts_by_Type_Parts;        // 0x2A8(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x2C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Get Num MaterialSlots of WeaponType
struct UModularWeaponTools_C_Get_Num_MaterialSlots_of_WeaponType_Params
{
public:
	class FString                                WeaponType;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Slots;                                             // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EMaterialSlot>             Material_Slots;                                    // 0x20(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<enum class EMaterialSlot>             CallFunc_Get_MaterialSlots_of_WeaponType_Slots;    // 0x30(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xFC (0xFC - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Random Parts Strings of Type
struct UModularWeaponTools_C_Random_Parts_Strings_of_Type_Params
{
public:
	class FString                                Weapon_Type;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        Optional_Parts_Weight;                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1635[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        Weapon_Parts;                                      // 0x20(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Local_Filtered_Weapon_Parts;                       // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Local_Weapon_Parts;                                // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                        New_Parts;                                         // 0x50(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Temp_struct_Variable;                              // 0x60(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   CallFunc_Filter_Weapon_Parts_by_Type_Parts;        // 0x70(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1657[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponPart                           CallFunc_Array_Get_Item;                           // 0x90(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_165A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1667[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Random Materials Strings of Type
struct UModularWeaponTools_C_Random_Materials_Strings_of_Type_Params
{
public:
	class FString                                Weapon_Type;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        Weapon_Materials;                                  // 0x18(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class FString>                        New_Materials;                                     // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<enum class EMaterialSlot>             CallFunc_Get_MaterialSlots_of_WeaponType_Slots;    // 0x38(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMaterialSlot                     CallFunc_Array_Get_Item;                           // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMaterialSet>                  CallFunc_Get_MaterialSets_of_Slot_MaterialSets;    // 0x58(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames; // 0x68(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Compile WeaponCode
struct UModularWeaponTools_C_Compile_WeaponCode_Params
{
public:
	class FString                                Weapon_Type;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        Weapon_Parts;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<class FString>                        Weapon_Materials;                                  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                WeaponCode;                                        // 0x38(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Local_WeaponCode;                                  // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1786[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1790[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_179E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Set Material on WeaponCode
struct UModularWeaponTools_C_Set_Material_on_WeaponCode_Params
{
public:
	class FString                                WeaponCode;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Index_to_set;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                New_Material_ShortName;                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                New_WeaponCode;                                    // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        Local_Materials;                                   // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Type_from_WeaponCode_Weapon_Type;     // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts;   // 0x60(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames; // 0x70(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Compile_WeaponCode_WeaponCode;            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Get Materials from WeaponCode
struct UModularWeaponTools_C_Get_Materials_from_WeaponCode_Params
{
public:
	class FString                                WeaponCode;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        Material_ShortNames;                               // 0x18(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class FString>                        Found_Mats_Array;                                  // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x38(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue_1;             // 0x58(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0xF4 (0xF4 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Get WeaponType
struct UModularWeaponTools_C_Get_WeaponType_Params
{
public:
	class FString                                Weapon_Type;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponType                           Found_Weapon_Type;                                 // 0x18(0x30)(Parm, OutParm, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponType>                   Local_Weapon_Types;                                // 0x50(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Type_found;                                        // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponType                           Local_WeaponType;                                  // 0x68(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FWeaponType>                   Temp_struct_Variable;                              // 0x98(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponType                           CallFunc_Array_Get_Item;                           // 0xB8(0x30)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0xEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18FA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Random MaterialSet of Slot
struct UModularWeaponTools_C_Random_MaterialSet_of_Slot_Params
{
public:
	enum class EMaterialSlot                     Material_Slot;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_196D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMaterialSet                          Material_Set;                                      // 0x10(0x44)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_1972[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Material_ShortName;                                // 0x58(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FMaterialSet>                  CallFunc_Get_MaterialSets_of_Slot_MaterialSets;    // 0x68(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames; // 0x78(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMaterialSet                          CallFunc_Array_Get_Item;                           // 0x90(0x44)(HasGetValueTypeHash)
	uint8                                        Pad_198D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA4 (0xA4 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Get MaterialSlots of WeaponType
struct UModularWeaponTools_C_Get_MaterialSlots_of_WeaponType_Params
{
public:
	class FString                                WeaponType;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EMaterialSlot>             Slots;                                             // 0x18(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FWeaponType>                   Local_Weapon_Types;                                // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<enum class EMaterialSlot>             Material_Slots;                                    // 0x38(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FWeaponType>                   Temp_struct_Variable;                              // 0x48(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A1C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponType                           CallFunc_Array_Get_Item;                           // 0x68(0x30)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x9E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A2C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Get MaterialSets of Slot
struct UModularWeaponTools_C_Get_MaterialSets_of_Slot_Params
{
public:
	enum class EMaterialSlot                     Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMaterialSet>                  MaterialSets;                                      // 0x10(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class FString>                        MaterialSets_ShortNames;                           // 0x20(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FMaterialSet>                  Unfiltered_Materials;                              // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                        Filtered_Material_Strings;                         // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FMaterialSet>                  Filtered_Materials;                                // 0x50(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FMaterialSet>                  Temp_struct_Variable;                              // 0x60(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FMaterialSet>                  K2Node_MakeArray_Array;                            // 0x70(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMaterialSet                          CallFunc_Array_Get_Item;                           // 0x90(0x44)(HasGetValueTypeHash)
	uint8                                        Pad_1AE2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AF5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Random WeaponCode of same Type from WeaponCode
struct UModularWeaponTools_C_Random_WeaponCode_of_same_Type_from_WeaponCode_Params
{
public:
	class FString                                WeaponCode;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        Optional_Parts_Weight;                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                New_WeaponCode;                                    // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Type_from_WeaponCode_Weapon_Type;     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Random_WeaponCode_of_Type_WeaponCode;     // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xB4 (0xB4 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Get Num Variations for Weapon Part
struct UModularWeaponTools_C_Get_Num_Variations_for_Weapon_Part_Params
{
public:
	class FString                                Weapon_Type;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Weapon_Part_Prefix;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumVariations;                                     // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Part_found;                                        // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponPart>                   Local_Weapon_Parts;                                // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Part_Type_found;                                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Found_Amount;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Temp_struct_Variable;                              // 0x48(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponPart                           CallFunc_Array_Get_Item;                           // 0x68(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_1C15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0xAE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C22[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF2 (0xF2 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Set Part Index on WeaponCode
struct UModularWeaponTools_C_Set_Part_Index_on_WeaponCode_Params
{
public:
	class FString                                WeaponCode;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Weapon_Part_Prefix;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        New_Index;                                         // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                New_WeaponCode;                                    // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        Parts_Array;                                       // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                New_Code;                                          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CFE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames; // 0x68(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Type_from_WeaponCode_Weapon_Type;     // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts;   // 0x88(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D21[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Compile_WeaponCode_WeaponCode;            // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_StartsWith_ReturnValue;                   // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x89 (0x89 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Get Part Index from WeaponCode
struct UModularWeaponTools_C_Get_Part_Index_from_WeaponCode_Params
{
public:
	class FString                                WeaponCode;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Weapon_Part_Prefix;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Found_Index;                                       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts;   // 0x30(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_RightChop_ReturnValue;                    // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_StartsWith_ReturnValue;                   // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Get Parts from WeaponCode
struct UModularWeaponTools_C_Get_Parts_from_WeaponCode_Params
{
public:
	class FString                                WeaponCode;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        Weapon_Parts;                                      // 0x18(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class FString>                        Output_Weapon_Parts;                               // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x38(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue_1;             // 0x58(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Get Type from WeaponCode
struct UModularWeaponTools_C_Get_Type_from_WeaponCode_Params
{
public:
	class FString                                WeaponCode;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Weapon_Type;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x28(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xA4 (0xA4 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Get Number of Part Categories for Weapon Type
struct UModularWeaponTools_C_Get_Number_of_Part_Categories_for_Weapon_Type_Params
{
public:
	bool                                         Required_Parts;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Optional_Parts;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FE8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Weapon_Type;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponPart>                   Local_Weapon_Parts;                                // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Amount_found;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponPart                           CallFunc_Array_Get_Item;                           // 0x48(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_2016[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x86(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x87(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2032[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Temp_struct_Variable;                              // 0x90(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Random Weapon Type
struct UModularWeaponTools_C_Random_Weapon_Type_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Weapon_Type;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Available_Weapon_Types_Available_Types;   // 0x18(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Random Weapon Part
struct UModularWeaponTools_C_Random_Weapon_Part_Params
{
public:
	struct FWeaponPart                           Weapon_Part;                                       // 0x0(0x31)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_20E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                PartString;                                        // 0x40(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xBD (0xBD - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Filter Weapon Parts by Type
struct UModularWeaponTools_C_Filter_Weapon_Parts_by_Type_Params
{
public:
	TArray<struct FWeaponPart>                   Weapon_Parts;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class FString                                Weapon_Type;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Exclude_Optional_Parts;                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Optional_Parts_Weight;                             // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Parts;                                             // 0x30(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Incoming_Parts_Array;                              // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Parts_Array;                                       // 0x50(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloat_ReturnValue;                  // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponPart                           CallFunc_Array_Get_Item;                           // 0x70(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_2205[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2209[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_221C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC9 (0xC9 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Available Weapon Parts of Type
struct UModularWeaponTools_C_Available_Weapon_Parts_of_Type_Params
{
public:
	class FString                                Weapon_Type;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Exclude_Optional_Parts;                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        Available_Parts;                                   // 0x20(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Local_Weapon_Parts;                                // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                        Found_Types;                                       // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Temp_struct_Variable;                              // 0x50(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponPart                           CallFunc_Array_Get_Item;                           // 0x70(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_2302[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ToLower_ReturnValue;                      // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_230B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2312[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xAD (0xAD - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Available Weapon Types
struct UModularWeaponTools_C_Available_Weapon_Types_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        Available_Types;                                   // 0x8(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Local_Weapon_Parts;                                // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                        Found_Types;                                       // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Temp_struct_Variable;                              // 0x38(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponPart                           CallFunc_Array_Get_Item;                           // 0x58(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_23B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ToLower_ReturnValue;                      // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C8 (0x1C8 - 0x0)
// Function ModularWeaponTools.ModularWeaponTools_C.Random WeaponCode of Type
struct UModularWeaponTools_C_Random_WeaponCode_of_Type_Params
{
public:
	class FString                                Weapon_Type;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        Optional_Parts_Weight;                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2488[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                WeaponCode;                                        // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Unfiltered_Weapon_Parts_Array;                     // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                Output_String;                                     // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Filtered_Weapon_Parts_Array;                       // 0x50(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<enum class EMaterialSlot>             CallFunc_Get_MaterialSlots_of_WeaponType_Slots;    // 0x60(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMaterialSlot                     CallFunc_Array_Get_Item;                           // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24B0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMaterialSet                          CallFunc_Random_MaterialSet_of_Slot_Material_Set;  // 0x80(0x44)(HasGetValueTypeHash)
	uint8                                        Pad_24B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Random_MaterialSet_of_Slot_Material_ShortName; // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponPart                           CallFunc_Array_Get_Item_1;                         // 0xF8(0x31)(HasGetValueTypeHash)
	uint8                                        Pad_24DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Random_Weapon_Part_PartString;            // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FWeaponPart>                   Temp_struct_Variable;                              // 0x158(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2503[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponPart>                   CallFunc_Filter_Weapon_Parts_by_Type_Parts;        // 0x198(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


