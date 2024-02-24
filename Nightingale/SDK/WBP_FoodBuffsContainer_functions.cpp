#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_FoodBuffsContainer.WBP_FoodBuffsContainer_C
// (None)

class UClass* UWBP_FoodBuffsContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FoodBuffsContainer_C");

	return Clss;
}


// WBP_FoodBuffsContainer_C WBP_FoodBuffsContainer.Default__WBP_FoodBuffsContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FoodBuffsContainer_C* UWBP_FoodBuffsContainer_C::GetDefaultObj()
{
	static class UWBP_FoodBuffsContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FoodBuffsContainer_C*>(UWBP_FoodBuffsContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FoodBuffsContainer.WBP_FoodBuffsContainer_C.InitializeConsumptionComponent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ConsumptionComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FoodBuffsContainer_C::InitializeConsumptionComponent(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBP_ConsumptionComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FoodBuffsContainer_C", "InitializeConsumptionComponent");

	Params::UWBP_FoodBuffsContainer_C_InitializeConsumptionComponent_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FoodBuffsContainer.WBP_FoodBuffsContainer_C.InitializeFoodSlots
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              SlotPadding                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_FoodBuff_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFoodSlot>           CallFunc_GetFoodSlots_FoodSlots                                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFoodSlot                   CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FoodBuffsContainer_C::InitializeFoodSlots(float SlotPadding, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_FoodBuff_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, TArray<struct FFoodSlot>& CallFunc_GetFoodSlots_FoodSlots, int32 CallFunc_Array_Length_ReturnValue, const struct FFoodSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FoodBuffsContainer_C", "InitializeFoodSlots");

	Params::UWBP_FoodBuffsContainer_C_InitializeFoodSlots_Params Parms{};

	Parms.SlotPadding = SlotPadding;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetFoodSlots_FoodSlots = CallFunc_GetFoodSlots_FoodSlots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FoodBuffsContainer.WBP_FoodBuffsContainer_C.OnFoodSlotOverwrittenHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFoodSlot                   FoodSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_FoodBuffsContainer_C::OnFoodSlotOverwrittenHandler(const struct FFoodSlot& FoodSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FoodBuffsContainer_C", "OnFoodSlotOverwrittenHandler");

	Params::UWBP_FoodBuffsContainer_C_OnFoodSlotOverwrittenHandler_Params Parms{};

	Parms.FoodSlot = FoodSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FoodBuffsContainer.WBP_FoodBuffsContainer_C.OnFoodSlotClearedHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FoodSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FoodBuffsContainer_C::OnFoodSlotClearedHandler(int32 FoodSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FoodBuffsContainer_C", "OnFoodSlotClearedHandler");

	Params::UWBP_FoodBuffsContainer_C_OnFoodSlotClearedHandler_Params Parms{};

	Parms.FoodSlot = FoodSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FoodBuffsContainer.WBP_FoodBuffsContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FoodBuffsContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FoodBuffsContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FoodBuffsContainer.WBP_FoodBuffsContainer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FoodBuffsContainer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FoodBuffsContainer_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FoodBuffsContainer.WBP_FoodBuffsContainer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FoodBuffsContainer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FoodBuffsContainer_C", "PreConstruct");

	Params::UWBP_FoodBuffsContainer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FoodBuffsContainer.WBP_FoodBuffsContainer_C.ExecuteUbergraph_WBP_FoodBuffsContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_FoodBuffsContainer_C::ExecuteUbergraph_WBP_FoodBuffsContainer(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FoodBuffsContainer_C", "ExecuteUbergraph_WBP_FoodBuffsContainer");

	Params::UWBP_FoodBuffsContainer_C_ExecuteUbergraph_WBP_FoodBuffsContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


