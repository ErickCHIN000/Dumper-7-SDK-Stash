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
// Function BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C.OnRep_MapIconData
struct ABP_MapSearchArea_Custom_C_OnRep_MapIconData_Params
{
public:
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C.OnLoaded_8EBA724943AB38CE185D73B81B2F7D71
struct ABP_MapSearchArea_Custom_C_OnLoaded_8EBA724943AB38CE185D73B81B2F7D71_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C.ReceiveEndPlay
struct ABP_MapSearchArea_Custom_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C.ReceiveTick
struct ABP_MapSearchArea_Custom_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C.ExecuteUbergraph_BP_MapSearchArea_Custom
struct ABP_MapSearchArea_Custom_C_ExecuteUbergraph_BP_MapSearchArea_Custom_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_333B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3361[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUMG_RadarMainScreen_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x38(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUMG_RadarMainScreen_C*                CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3375[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3384[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUMG_RadarMainScreen_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x68(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUMG_RadarMainScreen_C*                CallFunc_Array_Get_Item_1;                         // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUMG_RadarMainScreen_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;      // 0x88(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUMG_RadarMainScreen_C*                CallFunc_Array_Get_Item_2;                         // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_2;         // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3394[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapSearchArea                        CallFunc_GetMapSearchAreaStruct_MapSearchArea;     // 0xA8(0x50)(None)
	enum class EValid                            CallFunc_GetMapSearchAreaStruct_Paths;             // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_RadarSquare_C*                    CallFunc_AddQuestSearchArea_Widget;                // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


