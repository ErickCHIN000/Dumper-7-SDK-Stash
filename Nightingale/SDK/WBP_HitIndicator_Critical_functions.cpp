#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HitIndicator_Critical.WBP_HitIndicator_Critical_C
// (None)

class UClass* UWBP_HitIndicator_Critical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HitIndicator_Critical_C");

	return Clss;
}


// WBP_HitIndicator_Critical_C WBP_HitIndicator_Critical.Default__WBP_HitIndicator_Critical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HitIndicator_Critical_C* UWBP_HitIndicator_Critical_C::GetDefaultObj()
{
	static class UWBP_HitIndicator_Critical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HitIndicator_Critical_C*>(UWBP_HitIndicator_Critical_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HitIndicator_Critical.WBP_HitIndicator_Critical_C.RemoveHitIndication
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HitIndicator_Critical_C::RemoveHitIndication()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HitIndicator_Critical_C", "RemoveHitIndication");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HitIndicator_Critical.WBP_HitIndicator_Critical_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HitIndicator_Critical_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HitIndicator_Critical_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HitIndicator_Critical.WBP_HitIndicator_Critical_C.AddHitIndication
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HitIndicator_Critical_C::AddHitIndication()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HitIndicator_Critical_C", "AddHitIndication");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HitIndicator_Critical.WBP_HitIndicator_Critical_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HitIndicator_Critical_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HitIndicator_Critical_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HitIndicator_Critical.WBP_HitIndicator_Critical_C.ExecuteUbergraph_WBP_HitIndicator_Critical
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_CrosshairBase_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UWBP_CrosshairBase_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HitIndicator_Critical_C::ExecuteUbergraph_WBP_HitIndicator_Critical(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class UWBP_CrosshairBase_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWBP_CrosshairBase_C* CallFunc_Array_Get_Item, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HitIndicator_Critical_C", "ExecuteUbergraph_WBP_HitIndicator_Critical");

	Params::UWBP_HitIndicator_Critical_C_ExecuteUbergraph_WBP_HitIndicator_Critical_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


