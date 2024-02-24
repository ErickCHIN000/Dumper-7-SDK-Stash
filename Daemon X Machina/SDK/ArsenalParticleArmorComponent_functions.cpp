#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalParticleArmorComponent.ArsenalParticleArmorComponent_C
// (None)

class UClass* UArsenalParticleArmorComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalParticleArmorComponent_C");

	return Clss;
}


// ArsenalParticleArmorComponent_C ArsenalParticleArmorComponent.Default__ArsenalParticleArmorComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalParticleArmorComponent_C* UArsenalParticleArmorComponent_C::GetDefaultObj()
{
	static class UArsenalParticleArmorComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalParticleArmorComponent_C*>(UArsenalParticleArmorComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalParticleArmorComponent.ArsenalParticleArmorComponent_C.InitializeArmor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalParticleArmorComponent_C::InitializeArmor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalParticleArmorComponent_C", "InitializeArmor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalParticleArmorComponent.ArsenalParticleArmorComponent_C.ExecuteUbergraph_ArsenalParticleArmorComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalParticleArmorComponent_C::ExecuteUbergraph_ArsenalParticleArmorComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalParticleArmorComponent_C", "ExecuteUbergraph_ArsenalParticleArmorComponent");

	Params::UArsenalParticleArmorComponent_C_ExecuteUbergraph_ArsenalParticleArmorComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


