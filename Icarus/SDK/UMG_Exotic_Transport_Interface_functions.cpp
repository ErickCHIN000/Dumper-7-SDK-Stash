#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C
// (None)

class UClass* UUMG_Exotic_Transport_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Exotic_Transport_Interface_C");

	return Clss;
}


// UMG_Exotic_Transport_Interface_C UMG_Exotic_Transport_Interface.Default__UMG_Exotic_Transport_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Exotic_Transport_Interface_C* UUMG_Exotic_Transport_Interface_C::GetDefaultObj()
{
	static class UUMG_Exotic_Transport_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Exotic_Transport_Interface_C*>(UUMG_Exotic_Transport_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.CheckForPods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_Exotic_Transport_Pod_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Exotic_Transport_Interface_C::CheckForPods(TArray<class ABP_Exotic_Transport_Pod_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "CheckForPods");

	Params::UUMG_Exotic_Transport_Interface_C_CheckForPods_Params Parms{};

	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.GetLinkedActorInventoryComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent*         InventoryComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Exotic_Transport_Interface_C::GetLinkedActorInventoryComponent(class UInventoryComponent** InventoryComponent, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "GetLinkedActorInventoryComponent");

	Params::UUMG_Exotic_Transport_Interface_C_GetLinkedActorInventoryComponent_Params Parms{};

	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryComponent != nullptr)
		*InventoryComponent = Parms.InventoryComponent;

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.IsRequestingNewDropship
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUMG_Exotic_Transport_Interface_C::IsRequestingNewDropship(bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "IsRequestingNewDropship");

	Params::UUMG_Exotic_Transport_Interface_C_IsRequestingNewDropship_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.UpdateNextRequestCooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Exotic_Transport_Pod_C*  YoungestTransportPod                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              YoungestTransportPodAge                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeployableBase_C*        K2Node_DynamicCast_AsBP_Deployable_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsRequestingNewDropship_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_Exotic_Transport_Pod_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_Exotic_Transport_Pod_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeSinceCreation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_Exotic_Transport_Interface_C::UpdateNextRequestCooldown(class ABP_Exotic_Transport_Pod_C* YoungestTransportPod, float YoungestTransportPodAge, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside, bool CallFunc_IsSheltered_ReturnValue, class FText Temp_text_Variable, bool CallFunc_IsRequestingNewDropship_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText Temp_text_Variable_1, class FText K2Node_Select_Default, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, TArray<class ABP_Exotic_Transport_Pod_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Exotic_Transport_Pod_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetGameTimeSinceCreation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "UpdateNextRequestCooldown");

	Params::UUMG_Exotic_Transport_Interface_C_UpdateNextRequestCooldown_Params Parms{};

	Parms.YoungestTransportPod = YoungestTransportPod;
	Parms.YoungestTransportPodAge = YoungestTransportPodAge;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Deployable_Base = K2Node_DynamicCast_AsBP_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside = CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsRequestingNewDropship_ReturnValue = CallFunc_IsRequestingNewDropship_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetGameTimeSinceCreation_ReturnValue = CallFunc_GetGameTimeSinceCreation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.IsHostWithClients
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Exotic_Transport_Interface_C::IsHostWithClients(bool* Result, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocalPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "IsHostWithClients");

	Params::UUMG_Exotic_Transport_Interface_C_IsHostWithClients_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.RequestPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Exotic_Transport_Interface_C::RequestPod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "RequestPod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.DoNothing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Exotic_Transport_Interface_C::DoNothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "DoNothing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.BndEvt__UMG_Exotic_Transport_Interface_WorkshopToggleButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Exotic_Transport_Interface_C::BndEvt__UMG_Exotic_Transport_Interface_WorkshopToggleButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "BndEvt__UMG_Exotic_Transport_Interface_WorkshopToggleButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_Exotic_Transport_Interface_C_BndEvt__UMG_Exotic_Transport_Interface_WorkshopToggleButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.BndEvt__UMG_Exotic_Transport_Interface_WorkshopButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Exotic_Transport_Interface_C::BndEvt__UMG_Exotic_Transport_Interface_WorkshopButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "BndEvt__UMG_Exotic_Transport_Interface_WorkshopButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UUMG_Exotic_Transport_Interface_C_BndEvt__UMG_Exotic_Transport_Interface_WorkshopButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.BndEvt__UMG_Exotic_Transport_Interface_LoadoutToggleButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Exotic_Transport_Interface_C::BndEvt__UMG_Exotic_Transport_Interface_LoadoutToggleButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "BndEvt__UMG_Exotic_Transport_Interface_LoadoutToggleButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UUMG_Exotic_Transport_Interface_C_BndEvt__UMG_Exotic_Transport_Interface_LoadoutToggleButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.ShowWorkshop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Exotic_Transport_Interface_C::ShowWorkshop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "ShowWorkshop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.ShowLoadouts
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Exotic_Transport_Interface_C::ShowLoadouts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "ShowLoadouts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Exotic_Transport_Interface_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.BndEvt__UMG_Exotic_Transport_Interface_CloseEquipmentButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Exotic_Transport_Interface_C::BndEvt__UMG_Exotic_Transport_Interface_CloseEquipmentButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "BndEvt__UMG_Exotic_Transport_Interface_CloseEquipmentButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UUMG_Exotic_Transport_Interface_C_BndEvt__UMG_Exotic_Transport_Interface_CloseEquipmentButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.OnEquipmentRequestButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Exotic_Transport_Interface_C::OnEquipmentRequestButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "OnEquipmentRequestButtonClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.SetPendingLoadoutExtension
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Exotic_Transport_Interface_C::SetPendingLoadoutExtension()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "SetPendingLoadoutExtension");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.CheckRequestPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Exotic_Transport_Interface_C::CheckRequestPod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "CheckRequestPod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Exotic_Transport_Interface_C::BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_Exotic_Transport_Interface_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Exotic_Transport_Interface_C::BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUMG_Exotic_Transport_Interface_C_BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Exotic_Transport_Interface_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C.ExecuteUbergraph_UMG_Exotic_Transport_Interface
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsWithEditor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetView_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        CallFunc_GetView_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_EquipmentRequestInventoryContainer_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_GetAllItems_ReturnValue                                 (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInsuranceEnabled_Insured                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Exotic_Transport_Interface_C::ExecuteUbergraph_UMG_Exotic_Transport_Interface(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsWithEditor_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_5, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput, class UTalentViewInterface* CallFunc_GetView_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_4, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_3, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_EquipmentRequestInventoryContainer_C* CallFunc_FinishSpawningActor_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, TArray<struct FItemData>& CallFunc_GetAllItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetInsuranceEnabled_Insured, bool CallFunc_BooleanAND_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_3, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable_3, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2, bool K2Node_DynamicCast_bSuccess_4, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_2, bool K2Node_SwitchEnum_CmpSuccess_4, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Exotic_Transport_Interface_C", "ExecuteUbergraph_UMG_Exotic_Transport_Interface");

	Params::UUMG_Exotic_Transport_Interface_C_ExecuteUbergraph_UMG_Exotic_Transport_Interface_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component = K2Node_DynamicCast_AsBP_Network_Proxy_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsWithEditor_ReturnValue = CallFunc_IsWithEditor_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetView_self_CastInput = CallFunc_GetView_self_CastInput;
	Parms.CallFunc_GetView_ReturnValue = CallFunc_GetView_ReturnValue;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUIController_Interface_1 = K2Node_DynamicCast_AsUIController_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetUserInterface_UserInterface_1 = CallFunc_GetUserInterface_UserInterface_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_2 = CallFunc_GetIcarusPlayerController_IsValid_2;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_2 = CallFunc_GetIcarusPlayerController_ReturnValue_2;
	Parms.CallFunc_GetAllItems_ReturnValue = CallFunc_GetAllItems_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetInsuranceEnabled_Insured = CallFunc_GetInsuranceEnabled_Insured;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_3 = CallFunc_GetIcarusPlayerController_IsValid_3;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_3 = CallFunc_GetIcarusPlayerController_ReturnValue_3;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_DynamicCast_AsUIController_Interface_2 = K2Node_DynamicCast_AsUIController_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetUserInterface_UserInterface_2 = CallFunc_GetUserInterface_UserInterface_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


