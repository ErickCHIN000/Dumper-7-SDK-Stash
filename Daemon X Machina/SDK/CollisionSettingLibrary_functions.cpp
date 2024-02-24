#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CollisionSettingLibrary.CollisionSettingLibrary_C
// (None)

class UClass* UCollisionSettingLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollisionSettingLibrary_C");

	return Clss;
}


// CollisionSettingLibrary_C CollisionSettingLibrary.Default__CollisionSettingLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollisionSettingLibrary_C* UCollisionSettingLibrary_C::GetDefaultObj()
{
	static class UCollisionSettingLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollisionSettingLibrary_C*>(UCollisionSettingLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollisionSettingLibrary.CollisionSettingLibrary_C.SetCollisionObjectTypeByCharacterType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         ComponentToSet                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetCollisionObjectTypeByCharacterType_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollisionSettingLibrary_C::SetCollisionObjectTypeByCharacterType(class AActor* Instigator, class UPrimitiveComponent* ComponentToSet, class UObject* __WorldContext, bool* Result, bool CallFunc_SetCollisionObjectTypeByCharacterType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionSettingLibrary_C", "SetCollisionObjectTypeByCharacterType");

	Params::UCollisionSettingLibrary_C_SetCollisionObjectTypeByCharacterType_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.ComponentToSet = ComponentToSet;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SetCollisionObjectTypeByCharacterType_ReturnValue = CallFunc_SetCollisionObjectTypeByCharacterType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CollisionSettingLibrary.CollisionSettingLibrary_C.SetCollisionByCharacterType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         ComponentToSet                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetCollisionByCharacterType_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollisionSettingLibrary_C::SetCollisionByCharacterType(class AActor* Instigator, class UPrimitiveComponent* ComponentToSet, class UObject* __WorldContext, bool* Result, bool CallFunc_SetCollisionByCharacterType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionSettingLibrary_C", "SetCollisionByCharacterType");

	Params::UCollisionSettingLibrary_C_SetCollisionByCharacterType_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.ComponentToSet = ComponentToSet;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SetCollisionByCharacterType_ReturnValue = CallFunc_SetCollisionByCharacterType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CollisionSettingLibrary.CollisionSettingLibrary_C.IgnoreCollisionByCharacterType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         ComponentToIgnore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IgnoreCollisionByCharacterType_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollisionSettingLibrary_C::IgnoreCollisionByCharacterType(class AActor* Instigator, class UPrimitiveComponent* ComponentToIgnore, class UObject* __WorldContext, bool* Result, bool CallFunc_IgnoreCollisionByCharacterType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollisionSettingLibrary_C", "IgnoreCollisionByCharacterType");

	Params::UCollisionSettingLibrary_C_IgnoreCollisionByCharacterType_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.ComponentToIgnore = ComponentToIgnore;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IgnoreCollisionByCharacterType_ReturnValue = CallFunc_IgnoreCollisionByCharacterType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


