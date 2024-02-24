#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Scanner_Cave.BP_SkeletalItem_Scanner_Cave_C
// (Actor)

class UClass* ABP_SkeletalItem_Scanner_Cave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Scanner_Cave_C");

	return Clss;
}


// BP_SkeletalItem_Scanner_Cave_C BP_SkeletalItem_Scanner_Cave.Default__BP_SkeletalItem_Scanner_Cave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Scanner_Cave_C* ABP_SkeletalItem_Scanner_Cave_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Scanner_Cave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Scanner_Cave_C*>(ABP_SkeletalItem_Scanner_Cave_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Scanner_Cave.BP_SkeletalItem_Scanner_Cave_C.UpdateLightMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Scanner_Cave_C::UpdateLightMaterial(float Intensity, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_Cave_C", "UpdateLightMaterial");

	Params::ABP_SkeletalItem_Scanner_Cave_C_UpdateLightMaterial_Params Parms{};

	Parms.Intensity = Intensity;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Scanner_Cave.BP_SkeletalItem_Scanner_Cave_C.PlayAudioBeep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Scanner_Cave_C::PlayAudioBeep(class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_Cave_C", "PlayAudioBeep");

	Params::ABP_SkeletalItem_Scanner_Cave_C_PlayAudioBeep_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Scanner_Cave.BP_SkeletalItem_Scanner_Cave_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Scanner_Cave_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_Cave_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Scanner_Cave.BP_SkeletalItem_Scanner_Cave_C.ExecuteUbergraph_BP_SkeletalItem_Scanner_Cave
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Scanner_Cave_C::ExecuteUbergraph_BP_SkeletalItem_Scanner_Cave(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_Cave_C", "ExecuteUbergraph_BP_SkeletalItem_Scanner_Cave");

	Params::ABP_SkeletalItem_Scanner_Cave_C_ExecuteUbergraph_BP_SkeletalItem_Scanner_Cave_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


