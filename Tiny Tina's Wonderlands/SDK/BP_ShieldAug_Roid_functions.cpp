#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShieldAug_Roid.BP_ShieldAug_Roid_C
// (None)

class UClass* UBP_ShieldAug_Roid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShieldAug_Roid_C");

	return Clss;
}


// BP_ShieldAug_Roid_C BP_ShieldAug_Roid.Default__BP_ShieldAug_Roid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ShieldAug_Roid_C* UBP_ShieldAug_Roid_C::GetDefaultObj()
{
	static class UBP_ShieldAug_Roid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ShieldAug_Roid_C*>(UBP_ShieldAug_Roid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldDepleted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ShieldAug_Roid_C::K2_OnShieldDepleted(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldAug_Roid_C", "K2_OnShieldDepleted");

	Params::UBP_ShieldAug_Roid_C_K2_OnShieldDepleted_Params Parms{};

	Parms.Shield = Shield;
	Parms.ResourcePool = ResourcePool;
	Parms.StackData = StackData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldFilled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ShieldAug_Roid_C::K2_OnShieldFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldAug_Roid_C", "K2_OnShieldFilled");

	Params::UBP_ShieldAug_Roid_C_K2_OnShieldFilled_Params Parms{};

	Parms.Shield = Shield;
	Parms.ResourcePool = ResourcePool;
	Parms.StackData = StackData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldUnequipped
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               Equipper                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ShieldAug_Roid_C::K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData& StackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldAug_Roid_C", "K2_OnShieldUnequipped");

	Params::UBP_ShieldAug_Roid_C_K2_OnShieldUnequipped_Params Parms{};

	Parms.Shield = Shield;
	Parms.Equipper = Equipper;
	Parms.StackData = StackData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnShieldEquipped
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               Equipper                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ShieldAug_Roid_C::K2_OnShieldEquipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData& StackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldAug_Roid_C", "K2_OnShieldEquipped");

	Params::UBP_ShieldAug_Roid_C_K2_OnShieldEquipped_Params Parms{};

	Parms.Shield = Shield;
	Parms.Equipper = Equipper;
	Parms.StackData = StackData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ShieldAug_Roid.BP_ShieldAug_Roid_C.K2_OnCausedDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UBP_ShieldAug_Roid_C::K2_OnCausedDamage(class AShield* Shield, struct FAugmentData& StackData, class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShieldAug_Roid_C", "K2_OnCausedDamage");

	Params::UBP_ShieldAug_Roid_C_K2_OnCausedDamage_Params Parms{};

	Parms.Shield = Shield;
	Parms.StackData = StackData;
	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}

}


