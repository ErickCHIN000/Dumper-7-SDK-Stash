#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Impact_Shared_Projectile.GC_Impact_Shared_Projectile_C
// (None)

class UClass* UGC_Impact_Shared_Projectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Impact_Shared_Projectile_C");

	return Clss;
}


// GC_Impact_Shared_Projectile_C GC_Impact_Shared_Projectile.Default__GC_Impact_Shared_Projectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Impact_Shared_Projectile_C* UGC_Impact_Shared_Projectile_C::GetDefaultObj()
{
	static class UGC_Impact_Shared_Projectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Impact_Shared_Projectile_C*>(UGC_Impact_Shared_Projectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Impact_Shared_Projectile.GC_Impact_Shared_Projectile_C.GetSourceTagFromActor
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      StrikingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SourceTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileBase_C*        K2Node_DynamicCast_AsBP_Projectile_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Get_Source_Tag_ImpactTag                                (NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Shared_Projectile_C::GetSourceTagFromActor(class AActor* StrikingActor, struct FGameplayTag* SourceTag, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_Get_Source_Tag_ImpactTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Shared_Projectile_C", "GetSourceTagFromActor");

	Params::UGC_Impact_Shared_Projectile_C_GetSourceTagFromActor_Params Parms{};

	Parms.StrikingActor = StrikingActor;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Base = K2Node_DynamicCast_AsBP_Projectile_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Source_Tag_ImpactTag = CallFunc_Get_Source_Tag_ImpactTag;

	UObject::ProcessEvent(Func, &Parms);

	if (SourceTag != nullptr)
		*SourceTag = std::move(Parms.SourceTag);

}


// Function GC_Impact_Shared_Projectile.GC_Impact_Shared_Projectile_C.GetElementTagFromActor
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ElementalTag                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileBase_C*        K2Node_DynamicCast_AsBP_Projectile_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Get_Element_Tag_ElementTag                              (NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Shared_Projectile_C::GetElementTagFromActor(class AActor* Actor, struct FGameplayTag* ElementalTag, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_Get_Element_Tag_ElementTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Shared_Projectile_C", "GetElementTagFromActor");

	Params::UGC_Impact_Shared_Projectile_C_GetElementTagFromActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Base = K2Node_DynamicCast_AsBP_Projectile_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Element_Tag_ElementTag = CallFunc_Get_Element_Tag_ElementTag;

	UObject::ProcessEvent(Func, &Parms);

	if (ElementalTag != nullptr)
		*ElementalTag = std::move(Parms.ElementalTag);

}


// Function GC_Impact_Shared_Projectile.GC_Impact_Shared_Projectile_C.Get Impact Tag
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileBase_C*        K2Node_DynamicCast_AsBP_Projectile_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Get_Impact_Tag_ImpactTag                                (NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Shared_Projectile_C::Get_Impact_Tag(class UObject* Object, struct FGameplayTag* Tag, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_Get_Impact_Tag_ImpactTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Shared_Projectile_C", "Get Impact Tag");

	Params::UGC_Impact_Shared_Projectile_C_Get_Impact_Tag_Params Parms{};

	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Base = K2Node_DynamicCast_AsBP_Projectile_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Impact_Tag_ImpactTag = CallFunc_Get_Impact_Tag_ImpactTag;

	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}

}


