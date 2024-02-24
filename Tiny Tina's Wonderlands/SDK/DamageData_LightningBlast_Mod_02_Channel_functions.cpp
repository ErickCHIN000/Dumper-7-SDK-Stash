#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_LightningBlast_Mod_02_Channel.DamageData_LightningBlast_Mod_02_Channel_C
// (None)

class UClass* UDamageData_LightningBlast_Mod_02_Channel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_LightningBlast_Mod_02_Channel_C");

	return Clss;
}


// DamageData_LightningBlast_Mod_02_Channel_C DamageData_LightningBlast_Mod_02_Channel.Default__DamageData_LightningBlast_Mod_02_Channel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_LightningBlast_Mod_02_Channel_C* UDamageData_LightningBlast_Mod_02_Channel_C::GetDefaultObj()
{
	static class UDamageData_LightningBlast_Mod_02_Channel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_LightningBlast_Mod_02_Channel_C*>(UDamageData_LightningBlast_Mod_02_Channel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageData_LightningBlast_Mod_02_Channel.DamageData_LightningBlast_Mod_02_Channel_C.OnHitEnemy
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageDataEventDetails     Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayExplosion_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageData_LightningBlast_Mod_02_Channel_C::OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageData_LightningBlast_Mod_02_Channel_C", "OnHitEnemy");

	Params::UDamageData_LightningBlast_Mod_02_Channel_C_OnHitEnemy_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.DamageTarget = DamageTarget;
	Parms.Details = Details;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_PlayExplosion_ReturnValue = CallFunc_PlayExplosion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


