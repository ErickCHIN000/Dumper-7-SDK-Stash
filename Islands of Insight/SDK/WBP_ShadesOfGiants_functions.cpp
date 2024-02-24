#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShadesOfGiants.WBP_ShadesOfGiants_C
// (None)

class UClass* UWBP_ShadesOfGiants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShadesOfGiants_C");

	return Clss;
}


// WBP_ShadesOfGiants_C WBP_ShadesOfGiants.Default__WBP_ShadesOfGiants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShadesOfGiants_C* UWBP_ShadesOfGiants_C::GetDefaultObj()
{
	static class UWBP_ShadesOfGiants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShadesOfGiants_C*>(UWBP_ShadesOfGiants_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ShadesOfGiants.WBP_ShadesOfGiants_C.Finished_3F60F77B4601C1B7066AE2AB25EA7185
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ShadesOfGiants_C::Finished_3F60F77B4601C1B7066AE2AB25EA7185()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShadesOfGiants_C", "Finished_3F60F77B4601C1B7066AE2AB25EA7185");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShadesOfGiants.WBP_ShadesOfGiants_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShadesOfGiants_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShadesOfGiants_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShadesOfGiants.WBP_ShadesOfGiants_C.ExecuteUbergraph_WBP_ShadesOfGiants
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCharMapComponent*           CallFunc_GetMapComponent_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULargeMapViewWidget*         CallFunc_GetLatestLargeMapWidget_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_LargeMap_C*             K2Node_DynamicCast_AsWBP_Large_Map                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShadesOfGiants_C::ExecuteUbergraph_WBP_ShadesOfGiants(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue, class ULargeMapViewWidget* CallFunc_GetLatestLargeMapWidget_ReturnValue, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map, bool K2Node_DynamicCast_bSuccess_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShadesOfGiants_C", "ExecuteUbergraph_WBP_ShadesOfGiants");

	Params::UWBP_ShadesOfGiants_C_ExecuteUbergraph_WBP_ShadesOfGiants_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetMapComponent_ReturnValue = CallFunc_GetMapComponent_ReturnValue;
	Parms.CallFunc_GetLatestLargeMapWidget_ReturnValue = CallFunc_GetLatestLargeMapWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Large_Map = K2Node_DynamicCast_AsWBP_Large_Map;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


