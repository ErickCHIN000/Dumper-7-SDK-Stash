#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BlueOrbFragmentBeam.BP_BlueOrbFragmentBeam_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_BlueOrbFragmentBeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BlueOrbFragmentBeam_C");

	return Clss;
}


// BP_BlueOrbFragmentBeam_C BP_BlueOrbFragmentBeam.Default__BP_BlueOrbFragmentBeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BlueOrbFragmentBeam_C* UBP_BlueOrbFragmentBeam_C::GetDefaultObj()
{
	static class UBP_BlueOrbFragmentBeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BlueOrbFragmentBeam_C*>(UBP_BlueOrbFragmentBeam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BlueOrbFragmentBeam.BP_BlueOrbFragmentBeam_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_BlueOrbFragmentBeam_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BlueOrbFragmentBeam_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BlueOrbFragmentBeam.BP_BlueOrbFragmentBeam_C.ExecuteUbergraph_BP_BlueOrbFragmentBeam
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BlueOrbFragmentBeam_C::ExecuteUbergraph_BP_BlueOrbFragmentBeam(int32 EntryPoint, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BlueOrbFragmentBeam_C", "ExecuteUbergraph_BP_BlueOrbFragmentBeam");

	Params::UBP_BlueOrbFragmentBeam_C_ExecuteUbergraph_BP_BlueOrbFragmentBeam_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_1 = CallFunc_GetVectorParameterValue_ReturnValue_1;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue_1 = CallFunc_Conv_LinearColorToColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


