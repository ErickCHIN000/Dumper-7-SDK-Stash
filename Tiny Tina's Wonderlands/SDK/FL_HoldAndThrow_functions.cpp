#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FL_HoldAndThrow.FL_HoldAndThrow_C
// (None)

class UClass* UFL_HoldAndThrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FL_HoldAndThrow_C");

	return Clss;
}


// FL_HoldAndThrow_C FL_HoldAndThrow.Default__FL_HoldAndThrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFL_HoldAndThrow_C* UFL_HoldAndThrow_C::GetDefaultObj()
{
	static class UFL_HoldAndThrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFL_HoldAndThrow_C*>(UFL_HoldAndThrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Throw
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ProjectileHoldAndThrow_C>K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_HoldAndThrow_C::HNT_Throw(class AActor* Projectile, class UObject* __WorldContext, TScriptInterface<class IBPI_ProjectileHoldAndThrow_C> K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_HoldAndThrow_C", "HNT_Throw");

	Params::UFL_HoldAndThrow_C_HNT_Throw_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw = K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Drop
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ProjectileHoldAndThrow_C>K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_HoldAndThrow_C::HNT_Drop(class AActor* Projectile, class UObject* __WorldContext, TScriptInterface<class IBPI_ProjectileHoldAndThrow_C> K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_HoldAndThrow_C", "HNT_Drop");

	Params::UFL_HoldAndThrow_C_HNT_Drop_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw = K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Prime
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ProjectileHoldAndThrow_C>K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_HoldAndThrow_C::HNT_Prime(class AActor* Projectile, class UObject* __WorldContext, TScriptInterface<class IBPI_ProjectileHoldAndThrow_C> K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_HoldAndThrow_C", "HNT_Prime");

	Params::UFL_HoldAndThrow_C_HNT_Prime_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw = K2Node_DynamicCast_AsBPI_Projectile_Hold_and_Throw;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


