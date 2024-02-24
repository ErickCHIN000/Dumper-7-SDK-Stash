#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionEquipment_Stats.wid_CompanionEquipment_Stats_C
// (None)

class UClass* UWid_CompanionEquipment_Stats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionEquipment_Stats_C");

	return Clss;
}


// wid_CompanionEquipment_Stats_C wid_CompanionEquipment_Stats.Default__wid_CompanionEquipment_Stats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionEquipment_Stats_C* UWid_CompanionEquipment_Stats_C::GetDefaultObj()
{
	static class UWid_CompanionEquipment_Stats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionEquipment_Stats_C*>(UWid_CompanionEquipment_Stats_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionEquipment_Stats.wid_CompanionEquipment_Stats_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_Stats_C::UpdateSize(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_2, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Add_FloatFloat_ReturnValue_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_Stats_C", "UpdateSize");

	Params::UWid_CompanionEquipment_Stats_C_UpdateSize_Params Parms{};

	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue_1 = CallFunc_GetDesiredSize_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1 = CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue_2 = CallFunc_GetDesiredSize_ReturnValue_2;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_Stats.wid_CompanionEquipment_Stats_C.GetGlobalValueFromCurrentBuildID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        GlobalStatID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUpgradeInfo_isVaid                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUpgradeEntry               CallFunc_GetUpgradeInfo_ReturnValue                              (None)
// TArray<int32>                      CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_Stats_C::GetGlobalValueFromCurrentBuildID(class FName GlobalStatID, int32* Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetUpgradeInfo_isVaid, const struct FUpgradeEntry& CallFunc_GetUpgradeInfo_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_Stats_C", "GetGlobalValueFromCurrentBuildID");

	Params::UWid_CompanionEquipment_Stats_C_GetGlobalValueFromCurrentBuildID_Params Parms{};

	Parms.GlobalStatID = GlobalStatID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetUpgradeInfo_isVaid = CallFunc_GetUpgradeInfo_isVaid;
	Parms.CallFunc_GetUpgradeInfo_ReturnValue = CallFunc_GetUpgradeInfo_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function wid_CompanionEquipment_Stats.wid_CompanionEquipment_Stats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_Stats_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_Stats_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_Stats.wid_CompanionEquipment_Stats_C.Update
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveCurrentSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeCurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_Stats_C::Update(struct FInventoryEntry& ItemEntry, class FName CompanionID, bool RemoveCurrentSlot, enum class ECompanionEquipmentSlotType CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_Stats_C", "Update");

	Params::UWid_CompanionEquipment_Stats_C_Update_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.CompanionID = CompanionID;
	Parms.RemoveCurrentSlot = RemoveCurrentSlot;
	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_Stats.wid_CompanionEquipment_Stats_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_Stats_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_Stats_C", "PreConstruct");

	Params::UWid_CompanionEquipment_Stats_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_Stats.wid_CompanionEquipment_Stats_C.ExecuteUbergraph_wid_CompanionEquipment_Stats
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_ItemEntry                                     (ConstParm)
// class FName                        K2Node_CustomEvent_CompanionID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_RemoveCurrentSlot                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeK2Node_CustomEvent_CurrentSlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_Stats_C::ExecuteUbergraph_wid_CompanionEquipment_Stats(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FInventoryEntry& K2Node_CustomEvent_ItemEntry, class FName K2Node_CustomEvent_CompanionID, bool K2Node_CustomEvent_RemoveCurrentSlot, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_CurrentSlot, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_Stats_C", "ExecuteUbergraph_wid_CompanionEquipment_Stats");

	Params::UWid_CompanionEquipment_Stats_C_ExecuteUbergraph_wid_CompanionEquipment_Stats_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue_1 = CallFunc_GetDesiredSize_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_ItemEntry = K2Node_CustomEvent_ItemEntry;
	Parms.K2Node_CustomEvent_CompanionID = K2Node_CustomEvent_CompanionID;
	Parms.K2Node_CustomEvent_RemoveCurrentSlot = K2Node_CustomEvent_RemoveCurrentSlot;
	Parms.K2Node_CustomEvent_CurrentSlot = K2Node_CustomEvent_CurrentSlot;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


