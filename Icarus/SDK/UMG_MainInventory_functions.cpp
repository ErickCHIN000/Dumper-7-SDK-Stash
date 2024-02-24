#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MainInventory.UMG_MainInventory_C
// (None)

class UClass* UUMG_MainInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MainInventory_C");

	return Clss;
}


// UMG_MainInventory_C UMG_MainInventory.Default__UMG_MainInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MainInventory_C* UUMG_MainInventory_C::GetDefaultObj()
{
	static class UUMG_MainInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MainInventory_C*>(UUMG_MainInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MainInventory.UMG_MainInventory_C.IsInventoryVisibile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Visible                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainInventory_C::IsInventoryVisibile(bool* Visible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainInventory_C", "IsInventoryVisibile");

	Params::UUMG_MainInventory_C_IsInventoryVisibile_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;

}


// Function UMG_MainInventory.UMG_MainInventory_C.QuickShiftInventoryHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainInventory_C::QuickShiftInventoryHandler(int32 Location, class UInventory* Inventory, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainInventory_C", "QuickShiftInventoryHandler");

	Params::UUMG_MainInventory_C_QuickShiftInventoryHandler_Params Parms{};

	Parms.Location = Location;
	Parms.Inventory = Inventory;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainInventory.UMG_MainInventory_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  BoundInventory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  EnvirosuitInventory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  EquipmentInventory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  UpgradeInventory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  VisionInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_C*        Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FoodCount                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WaterCount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OxyCount                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MainInventory_C::Initialise(class UInventory* BoundInventory, class UInventory* EnvirosuitInventory, class UInventory* EquipmentInventory, class UInventory* UpgradeInventory, class UInventory* VisionInventory, class UUMG_UserInterface_C* Parent, int32 FoodCount, int32 WaterCount, int32 OxyCount, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainInventory_C", "Initialise");

	Params::UUMG_MainInventory_C_Initialise_Params Parms{};

	Parms.BoundInventory = BoundInventory;
	Parms.EnvirosuitInventory = EnvirosuitInventory;
	Parms.EquipmentInventory = EquipmentInventory;
	Parms.UpgradeInventory = UpgradeInventory;
	Parms.VisionInventory = VisionInventory;
	Parms.Parent = Parent;
	Parms.FoodCount = FoodCount;
	Parms.WaterCount = WaterCount;
	Parms.OxyCount = OxyCount;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainInventory.UMG_MainInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MainInventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainInventory_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainInventory.UMG_MainInventory_C.VisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        NewVisbility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainInventory_C::VisibilityChanged(enum class ESlateVisibility NewVisbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainInventory_C", "VisibilityChanged");

	Params::UUMG_MainInventory_C_VisibilityChanged_Params Parms{};

	Parms.NewVisbility = NewVisbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainInventory.UMG_MainInventory_C.BndEvt__UMG_MainInventory_Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_MainInventory_C::BndEvt__UMG_MainInventory_Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainInventory_C", "BndEvt__UMG_MainInventory_Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainInventory.UMG_MainInventory_C.BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_MainInventory_C::BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainInventory_C", "BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainInventory.UMG_MainInventory_C.BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_MainInventory_C::BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainInventory_C", "BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MainInventory.UMG_MainInventory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MainInventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainInventory_C", "Tick");

	Params::UUMG_MainInventory_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MainInventory.UMG_MainInventory_C.ExecuteUbergraph_UMG_MainInventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeybindingsRowHandle       Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// class UUMG_PhysicalKeyPrompt_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UUMG_PhysicalKeyPrompt_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_PhysicalKeyPrompt_C*    CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_KeybindPrompt_C*        CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_KeybindPrompt_C*        CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_KeybindPrompt_C*        CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_PlayerPreview_Survival_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_PlayerPreview_Survival_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue_1                         (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FKeybindingsRowHandle       Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_2                                           (ConstParm, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInventoryVisibile_Visible                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget_RenderTarget                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_3                                           (ConstParm, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_3                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_4                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_CustomEvent_NewVisbility                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FKeybindingsRowHandle       Temp_struct_Variable_4                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_5                                           (ConstParm, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_5                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_FormatRawSecondsToTimeLength_Formatted                  (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)

void UUMG_MainInventory_C::ExecuteUbergraph_UMG_MainInventory(int32 EntryPoint, const struct FKeybindingsRowHandle& Temp_struct_Variable, class FText CallFunc_Conv_ObjectToText_ReturnValue, class UUMG_PhysicalKeyPrompt_C* CallFunc_Create_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMG_PhysicalKeyPrompt_C* CallFunc_Create_ReturnValue_1, class UUMG_PhysicalKeyPrompt_C* CallFunc_Create_ReturnValue_2, class UUMG_KeybindPrompt_C* CallFunc_Create_ReturnValue_3, class UUMG_KeybindPrompt_C* CallFunc_Create_ReturnValue_4, class UUMG_KeybindPrompt_C* CallFunc_Create_ReturnValue_5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, TArray<class ABP_PlayerPreview_Survival_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_PlayerPreview_Survival_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FKeybindingsRowHandle& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, const struct FKey& Temp_struct_Variable_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsInventoryVisibile_Visible, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget_RenderTarget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText Temp_text_Variable, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, const struct FKey& Temp_struct_Variable_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_3, class FText Temp_text_Variable_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_4, enum class ESlateVisibility K2Node_CustomEvent_NewVisbility, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FKeybindingsRowHandle& Temp_struct_Variable_4, class FText CallFunc_Conv_ObjectToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FKey& Temp_struct_Variable_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText Temp_text_Variable_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue, const class FString& CallFunc_FormatRawSecondsToTimeLength_Formatted, float CallFunc_Add_FloatFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MainInventory_C", "ExecuteUbergraph_UMG_MainInventory");

	Params::UUMG_MainInventory_C_ExecuteUbergraph_UMG_MainInventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue_1 = CallFunc_Conv_ObjectToText_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsInventoryVisibile_Visible = CallFunc_IsInventoryVisibile_Visible;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_CreateRenderTarget_RenderTarget = CallFunc_CreateRenderTarget_RenderTarget;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue_2 = CallFunc_Conv_ObjectToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_2 = CallFunc_AddChildToHorizontalBox_ReturnValue_2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_3 = CallFunc_AddChildToHorizontalBox_ReturnValue_3;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_4 = CallFunc_AddChildToHorizontalBox_ReturnValue_4;
	Parms.K2Node_CustomEvent_NewVisbility = K2Node_CustomEvent_NewVisbility;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue_3 = CallFunc_Conv_ObjectToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_5 = CallFunc_AddChildToHorizontalBox_ReturnValue_5;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue = CallFunc_GetLevelTimeElapsedSec_ReturnValue;
	Parms.CallFunc_FormatRawSecondsToTimeLength_Formatted = CallFunc_FormatRawSecondsToTimeLength_Formatted;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


