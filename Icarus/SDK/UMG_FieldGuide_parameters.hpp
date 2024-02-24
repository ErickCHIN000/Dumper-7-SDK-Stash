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

// 0x81 (0x81 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.UpdateHeader
struct UUMG_FieldGuide_C_UpdateHeader_Params
{
public:
	enum class EFieldGuideCategory               Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFieldGuideCategory               Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFieldGuideCategory               Temp_byte_Variable_5;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BB5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x68(0x18)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ClearLeftSideBarSelection
struct UUMG_FieldGuide_C_ClearLeftSideBarSelection_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUMG_FieldGuide_List_Category_C*> CallFunc_GetChildWidgetsOfClass_ChildWidgets;      // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuide_List_Category_C*       CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x281 (0x281 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ShowBeastFromItem
struct UUMG_FieldGuide_C_ShowBeastFromItem_Params
{
public:
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FBestiaryDataRowHandle                Beast;                                             // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTerrainsRowHandle>            Maps;                                              // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FAtmospheresRowHandle>         Biomes;                                            // 0x40(0x10)(Edit, BlueprintVisible)
	struct FBestiaryDataRowHandle                CallFunc_GetBeastFromVestige_ReturnValue;          // 0x50(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CD7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetBeastUnlockPercent_ReturnValue;        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBestiaryData                         CallFunc_GetBestiaryDataStruct_BestiaryData;       // 0x70(0x1D8)(None)
	enum class EValid                            CallFunc_GetBestiaryDataStruct_Paths;              // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTerrainsRowHandle                    CallFunc_Array_Get_Item;                           // 0x24C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x265(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAtmospheresRowHandle                 CallFunc_Array_Get_Item_1;                         // 0x268(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11B (0x11B - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ShowFishFromItem
struct UUMG_FieldGuide_C_ShowFishFromItem_Params
{
public:
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFishDataRowHandle                    FishData;                                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFishDataRowHandle                    CallFunc_GetFishData_ReturnValue;                  // 0x34(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFishEntryUnlocked_ReturnValue;          // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFishData                             CallFunc_GetFishDataStruct_FishData;               // 0x50(0xC8)(None)
	enum class EValid                            CallFunc_GetFishDataStruct_Paths;                  // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ShowCurrentCategoryView
struct UUMG_FieldGuide_C_ShowCurrentCategoryView_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCurrentItemsView_CategoryRow;          // 0x0(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_GetCurrentItemsView_ItemRow;              // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_1;           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.DebugPrintBackList
struct UUMG_FieldGuide_C_DebugPrintBackList_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x8(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideBackButtonItem             CallFunc_Array_Get_Item;                           // 0x50(0x30)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemsStaticEnum                      CallFunc_RowHandleToStruct_ReturnValue;            // 0x88(0x10)(HasGetValueTypeHash)
	struct FFieldGuideCategoriesEnum             CallFunc_RowHandleToStruct_ReturnValue_1;          // 0x98(0x10)(HasGetValueTypeHash)
	class FName                                  CallFunc_StructToName_ReturnValue;                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_StructToName_ReturnValue_1;               // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0xB8(0x18)(None)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue_1;            // 0xD0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xE8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x128(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x168(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x178(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x9D (0x9D - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.PopBackListItem
struct UUMG_FieldGuide_C_PopBackListItem_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRowOut;                                    // 0x0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRowOut;                                        // 0x18(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideBackButtonItem             CallFunc_Array_Get_Item;                           // 0x6C(0x30)(NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6D (0x6D - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.PeakLastBackListItem
struct UUMG_FieldGuide_C_PeakLastBackListItem_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3029[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideBackButtonItem             CallFunc_Array_Get_Item;                           // 0x3C(0x30)(NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x52 (0x52 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.GetCurrentItemsView
struct UUMG_FieldGuide_C_GetCurrentItemsView_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	TArray<class UFieldGuideItemWidgetBase*>     CallFunc_GetChildWidgetsOfClass_ChildWidgets;      // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3101[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldGuideItemWidgetBase*             CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.PopViewFromBackList
struct UUMG_FieldGuide_C_PopViewFromBackList_Params
{
public:
	int32                                        BackLen;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCurrentItemsView_CategoryRow;          // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_GetCurrentItemsView_ItemRow;              // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CallFunc_PeakLastBackListItem_CategoryRow;         // 0x34(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_PeakLastBackListItem_ItemRow;             // 0x4C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CallFunc_PopBackListItem_CategoryRowOut;           // 0x64(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_PopBackListItem_ItemRowOut;               // 0x7C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue; // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FFieldGuideCategoriesRowHandleFFieldGuideCategoriesRowHandle_ReturnValue; // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFieldGuideCategoriesRowHandle        CallFunc_PopBackListItem_CategoryRowOut_1;         // 0x98(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_PopBackListItem_ItemRowOut_1;             // 0xB0(0x18)(NoDestructor, HasGetValueTypeHash)
};

// 0x9D (0x9D - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ConditionalAddToBackList
struct UUMG_FieldGuide_C_ConditionalAddToBackList_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CallFunc_PeakLastBackListItem_CategoryRow;         // 0x0(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_PeakLastBackListItem_ItemRow;             // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        CallFunc_GetCurrentItemsView_CategoryRow;          // 0x30(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_GetCurrentItemsView_ItemRow;              // 0x48(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_326F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFieldGuideBackButtonItem             K2Node_MakeStruct_FieldGuideBackButtonItem;        // 0x64(0x30)(NoDestructor)
	bool                                         CallFunc_EqualEqual_FFieldGuideCategoriesRowHandleFFieldGuideCategoriesRowHandle_ReturnValue; // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_327C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.Initialize Back List
struct UUMG_FieldGuide_C_Initialize_Back_List_Params
{
public:
	enum class EFieldGuideCategory               Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFieldGuideCategory               Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x43 (0x43 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ShowFieldGuideEx
struct UUMG_FieldGuide_C_ShowFieldGuideEx_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3358[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayConfigRowHandle              CallFunc_StructToRowHandle_ReturnValue;            // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_335C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayConfig                       CallFunc_GetGameplayConfigStruct_GameplayConfig;   // 0x20(0x20)(None)
	enum class EValid                            CallFunc_GetGameplayConfigStruct_Paths;            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.FilterItems
struct UUMG_FieldGuide_C_FilterItems_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.FilterBosses
struct UUMG_FieldGuide_C_FilterBosses_Params
{
public:
	struct FTerrainsRowHandle                    Map;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FAtmospheresRowHandle                 Atmosphere;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3449[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3474[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_347B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuide_Bestiary_Entry_C*      K2Node_DynamicCast_AsUMG_Field_Guide_Bestiary_Entry; // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x346 (0x346 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.FilterBestiary
struct UUMG_FieldGuide_C_FilterBestiary_Params
{
public:
	struct FTerrainsRowHandle                    Map;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FAtmospheresRowHandle                 Atmosphere;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class FText                                  BuiltString;                                       // 0x30(0x18)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusAtmosphere                     CallFunc_GetAtmospheresStruct_Atmospheres;         // 0x50(0xA8)(None)
	enum class EValid                            CallFunc_GetAtmospheresStruct_Paths;               // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusTerrain                        CallFunc_GetTerrainsStruct_Terrains;               // 0x100(0x130)(None)
	enum class EValid                            CallFunc_GetTerrainsStruct_Paths;                  // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x232(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35CF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x238(0x40)(HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x288(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x2D0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2E0(0x18)(None)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x2F8(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x310(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuide_Bestiary_Entry_C*      K2Node_DynamicCast_AsUMG_Field_Guide_Bestiary_Entry; // 0x320(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_360F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3613[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x334(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x339(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_361F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x33C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_1;           // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x342(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x343(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x345(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F7 (0x1F7 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.FilterFish
struct UUMG_FieldGuide_C_FilterFish_Params
{
public:
	enum class EFishRarity                       Rarity;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFishType                         Type;                                              // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFishRarity                       Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37BF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x68(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x88(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37E6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_5;                              // 0xB0(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xC8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xE0(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3817[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_7;                              // 0x128(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFishType                         Temp_byte_Variable_3;                              // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3829[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x148(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x160(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1A0(0x10)(ReferenceParm)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x1B0(0x10)(ReferenceParm, ContainsInstancedReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1C0(0x18)(None)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x1D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_Fish_Entry_C*          K2Node_DynamicCast_AsUMG_Field_Guide_Fish_Entry;   // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3859[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x1F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x1F6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16D (0x16D - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.CreateFieldGuideItems
struct UUMG_FieldGuide_C_CreateFieldGuideItems_Params
{
public:
	class UVerticalBox*                          LeftSideBar;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFieldGuideCategoriesRowHandle> NewLocalVar_1;                                     // 0x8(0x10)(Edit, BlueprintVisible)
	struct FFieldGuideCategoriesRowHandle        NewLocalVar_0;                                     // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	class UUMG_FieldGuide_List_Category_Items_C* CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_List_Button_Item_C*    CallFunc_Create_ReturnValue_1;                     // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFieldGuideCategoriesRowHandle> CallFunc_GetAllCategoryDisplayOrder_ReturnValue;   // 0x80(0x10)(ReferenceParm)
	struct FFieldGuideCategoriesRowHandle        CallFunc_Array_Get_Item;                           // 0x90(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemsStaticRowHandle>         CallFunc_GetAllItemsForCategory_ReturnValue;       // 0xB0(0x10)(ReferenceParm)
	struct FFieldGuideCategories                 CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories; // 0xC0(0x88)(None)
	enum class EValid                            CallFunc_GetFieldGuideCategoriesStruct_Paths;      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item_1;                         // 0x14C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6D0 (0x6D0 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.CreateBestiary
struct UUMG_FieldGuide_C_CreateBestiary_Params
{
public:
	class UVerticalBox*                          LeftSideBar;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FBestiaryDataRowHandle, int32>   BestiaryEntries;                                   // 0x8(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Variable;                                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBestiaryDataEnum                     CallFunc_IntToStruct_ReturnValue;                  // 0x60(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBestiaryDataRowHandle                CallFunc_StructToRowHandle_ReturnValue;            // 0x74(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryData                         CallFunc_GetBestiaryDataStruct_BestiaryData;       // 0x90(0x1D8)(None)
	enum class EValid                            CallFunc_GetBestiaryDataStruct_Paths;              // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CC3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuide_Bestiary_Entry_C*      CallFunc_Create_ReturnValue;                       // 0x270(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_List_Category_Bestiary_C* CallFunc_Create_ReturnValue_1;                     // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_List_Category_Bestiary_C* CallFunc_Create_ReturnValue_2;                     // 0x280(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_List_Button_Bestiary_C* CallFunc_Create_ReturnValue_3;                     // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_List_Category_Bestiary_C* CallFunc_Create_ReturnValue_4;                     // 0x2A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x2C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2D0(0x10)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x2E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2E8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_GetBeastUnlockPercent_ReturnValue;        // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBestiaryDataRowHandle>        CallFunc_Map_Keys_Keys;                            // 0x300(0x10)(ReferenceParm)
	struct FBestiaryDataRowHandle                CallFunc_Array_Get_Item;                           // 0x310(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x32C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x338(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x348(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x358(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_NumRows_ReturnValue;                      // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x370(0x18)(ConstParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FTerrainsRowHandle, struct FBestiaryCategory> CallFunc_GetBestiaryCategories_ReturnValue;        // 0x390(0x50)(None)
	TArray<struct FTerrainsRowHandle>            CallFunc_Map_Keys_Keys_1;                          // 0x3E0(0x10)(ReferenceParm)
	class UUMG_FieldGuide_List_Button_Bestiary_C* CallFunc_Create_ReturnValue_5;                     // 0x3F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTerrainsRowHandle                    CallFunc_Array_Get_Item_1;                         // 0x3F8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FIcarusTerrain                        CallFunc_GetTerrainsStruct_Terrains;               // 0x410(0x130)(None)
	enum class EValid                            CallFunc_GetTerrainsStruct_Paths;                  // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryCategory                     CallFunc_Map_Find_Value_1;                         // 0x548(0x50)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x599(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DCA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAtmospheresRowHandle>         CallFunc_Map_Keys_Keys_2;                          // 0x5A0(0x10)(ReferenceParm)
	struct FAtmospheresRowHandle                 CallFunc_Array_Get_Item_2;                         // 0x5B0(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x5C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x5CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DDF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusAtmosphere                     CallFunc_GetAtmospheresStruct_Atmospheres;         // 0x5D0(0xA8)(None)
	enum class EValid                            CallFunc_GetAtmospheresStruct_Paths;               // 0x678(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x679(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DE7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryBiome                        CallFunc_Map_Find_Value_2;                         // 0x680(0x10)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E07[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryDataRowHandle                CallFunc_Array_Get_Item_3;                         // 0x694(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x6AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetBeastUnlockPercent_ReturnValue_1;      // 0x6B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x6B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x6BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x6C0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x2B9 (0x2B9 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.CreateFishingRecord
struct UUMG_FieldGuide_C_CreateFishingRecord_Params
{
public:
	class UVerticalBox*                          LeftSideBar;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_List_Category_C*       Undiscovered;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_List_Category_C*       Discovered;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x48(0x18)(None)
	class UUMG_FieldGuide_List_Category_Fish_C*  CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFishType                         Temp_byte_Variable;                                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4109[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_3;                              // 0x70(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0xA0(0x18)(None)
	class UUMG_FieldGuide_List_Category_Fish_C*  CallFunc_Create_ReturnValue_1;                     // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_Fish_Entry_C*          CallFunc_Create_ReturnValue_2;                     // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_6;                              // 0xC8(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4131[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_7;                              // 0x100(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x118(0x10)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x130(0x10)(ZeroConstructor, NoDestructor)
	enum class EFishRarity                       Temp_byte_Variable_1;                              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4152[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuide_List_Button_Fish_C*    CallFunc_Create_ReturnValue_3;                     // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x150(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x160(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4167[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFishType, struct FFishCategory> CallFunc_GetFishingCategories_ReturnValue;         // 0x178(0x50)(None)
	TArray<enum class EFishType>                 CallFunc_Map_Keys_Keys;                            // 0x1C8(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFishType                         CallFunc_Array_Get_Item;                           // 0x1DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4179[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x1E0(0x18)(None)
	struct FFishCategory                         CallFunc_Map_Find_Value;                           // 0x1F8(0x50)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4187[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EFishRarity>               CallFunc_Map_Keys_Keys_1;                          // 0x250(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFishRarity                       CallFunc_Array_Get_Item_1;                         // 0x261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4194[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x268(0x18)(None)
	struct FFishRarity                           CallFunc_Map_Find_Value_1;                         // 0x280(0x10)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFishDataRowHandle                    CallFunc_Array_Get_Item_2;                         // 0x298(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFishEntryUnlocked_ReturnValue;          // 0x2B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41D5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.Populate
struct UUMG_FieldGuide_C_Populate_Params
{
public:
	class UBestiaryManagerComponent*             CallFunc_GetLocalBestiaryManagerComponent_ReturnValue; // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.LinkedActorDestroyed
struct UUMG_FieldGuide_C_LinkedActorDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.SetContent
struct UUMG_FieldGuide_C_SetContent_Params
{
public:
	enum class EFieldGuideCategory               Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ContentChanged;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4352[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               NewActiveWidget;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFieldGuideCategory               Temp_byte_Variable_4;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4386[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_438C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default_2;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.SetupObjectInventory
struct UUMG_FieldGuide_C_SetupObjectInventory_Params
{
public:
	class UInventory*                            ContainerInventory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.PreConstruct
struct UUMG_FieldGuide_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ShowCreature
struct UUMG_FieldGuide_C_ShowCreature_Params
{
public:
	struct FBestiaryDataRowHandle                Creature;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Percent;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ShowFish
struct UUMG_FieldGuide_C_ShowFish_Params
{
public:
	struct FFishDataRowHandle                    Creature;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Discovered;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ClickedTitleButton
struct UUMG_FieldGuide_C_ClickedTitleButton_Params
{
public:
	enum class EFieldGuideCategory               Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ShowItem
struct UUMG_FieldGuide_C_ShowItem_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        Category;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 Item;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ChildResourceClicked
struct UUMG_FieldGuide_C_ChildResourceClicked_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.FilterItemCategories
struct UUMG_FieldGuide_C_FilterItemCategories_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.HideSearchShowItem
struct UUMG_FieldGuide_C_HideSearchShowItem_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        CategoryRow;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 ItemRow;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.InitContentView
struct UUMG_FieldGuide_C_InitContentView_Params
{
public:
	enum class EFieldGuideCategory               Cateogry;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.FishLinkClicked
struct UUMG_FieldGuide_C_FishLinkClicked_Params
{
public:
	struct FItemsStaticRowHandle                 FishRow;                                           // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.BeastLinkClicked
struct UUMG_FieldGuide_C_BeastLinkClicked_Params
{
public:
	struct FItemsStaticRowHandle                 BeastRow;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x884 (0x884 - 0x0)
// Function UMG_FieldGuide.UMG_FieldGuide_C.ExecuteUbergraph_UMG_FieldGuide
struct UUMG_FieldGuide_C_ExecuteUbergraph_UMG_FieldGuide_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryDataRowHandle                K2Node_ComponentBoundEvent_Creature;               // 0x38(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Percent;                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x54(0x10)(ZeroConstructor, NoDestructor)
	struct FFishDataRowHandle                    K2Node_CustomEvent_Creature;                       // 0x64(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Discovered;                     // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A27[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuide_Fish_Page_C*           CallFunc_Create_ReturnValue;                       // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFieldGuideCategory               K2Node_CustomEvent_Category_1;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A49[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_FieldGuideResourceItemsOverview_C* CallFunc_Create_ReturnValue_1;                     // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	struct FFieldGuideCategoriesRowHandle        K2Node_CustomEvent_Category;                       // 0xB0(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_CustomEvent_Item;                           // 0xC8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemStaticData                       CallFunc_GetItemsStaticStruct_ItemsStatic;         // 0xE0(0x4D0)(None)
	enum class EValid                            CallFunc_GetItemsStaticStruct_Paths;               // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x5B4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x5C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFieldGuideCategories                 CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories; // 0x5C8(0x88)(None)
	enum class EValid                            CallFunc_GetFieldGuideCategoriesStruct_Paths;      // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFieldGuideCategories                 CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories_1; // 0x658(0x88)(None)
	enum class EValid                            CallFunc_GetFieldGuideCategoriesStruct_Paths_1;    // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x6E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x6E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A85[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldGuidePageWidgetBase*             CallFunc_Create_ReturnValue_2;                     // 0x6E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFieldGuidePageWidgetBase*             CallFunc_Create_ReturnValue_3;                     // 0x6F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x6F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue_1;               // 0x6F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A9E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x6FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x700(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x710(0x10)(ZeroConstructor, NoDestructor)
	class UUMG_FieldGuide_Category_Button_C*     CallFunc_Create_ReturnValue_4;                     // 0x720(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x728(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        K2Node_CustomEvent_CategoryRow_2;                  // 0x730(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_CustomEvent_ItemRow_2;                      // 0x748(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_2;                   // 0x760(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x770(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x780(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_3;                   // 0x788(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x790(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFieldGuideCategoriesRowHandle        K2Node_CustomEvent_CategoryRow_1;                  // 0x798(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_CustomEvent_ItemRow_1;                      // 0x7B0(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFieldGuideCategoriesRowHandle        K2Node_CustomEvent_CategoryRow;                    // 0x7D8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_CustomEvent_ItemRow;                        // 0x7F0(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x808(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x80C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x810(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x814(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x815(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x816(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B14[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x818(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_1;           // 0x81C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x81D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowFieldGuideEx_Show;                    // 0x81E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowFieldGuideEx_Show_1;                  // 0x81F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowFieldGuideEx_Show_2;                  // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x824(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x829(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x82A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x82B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFieldGuideCategory               K2Node_CustomEvent_Cateogry;                       // 0x82C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x82D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B77[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemsStaticRowHandle                 K2Node_CustomEvent_FishRow;                        // 0x830(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_Bestiary_Page_C*       CallFunc_Create_ReturnValue_5;                     // 0x848(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_4;                   // 0x850(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_CustomEvent_BeastRow;                       // 0x858(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x870(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x874(0x10)(ZeroConstructor, NoDestructor)
};

}
}


