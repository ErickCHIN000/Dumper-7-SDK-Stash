#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPHeatComponent_CoV_ManualTrans.BPHeatComponent_CoV_ManualTrans_C
// (None)

class UClass* UBPHeatComponent_CoV_ManualTrans_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPHeatComponent_CoV_ManualTrans_C");

	return Clss;
}


// BPHeatComponent_CoV_ManualTrans_C BPHeatComponent_CoV_ManualTrans.Default__BPHeatComponent_CoV_ManualTrans_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPHeatComponent_CoV_ManualTrans_C* UBPHeatComponent_CoV_ManualTrans_C::GetDefaultObj()
{
	static class UBPHeatComponent_CoV_ManualTrans_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPHeatComponent_CoV_ManualTrans_C*>(UBPHeatComponent_CoV_ManualTrans_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPHeatComponent_CoV_ManualTrans.BPHeatComponent_CoV_ManualTrans_C.OnStartOverheat
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBPHeatComponent_CoV_ManualTrans_C::OnStartOverheat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPHeatComponent_CoV_ManualTrans_C", "OnStartOverheat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPHeatComponent_CoV_ManualTrans.BPHeatComponent_CoV_ManualTrans_C.ExecuteUbergraph_BPHeatComponent_CoV_ManualTrans
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPHeatComponent_CoV_ManualTrans_C::ExecuteUbergraph_BPHeatComponent_CoV_ManualTrans(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPHeatComponent_CoV_ManualTrans_C", "ExecuteUbergraph_BPHeatComponent_CoV_ManualTrans");

	Params::UBPHeatComponent_CoV_ManualTrans_C_ExecuteUbergraph_BPHeatComponent_CoV_ManualTrans_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


