#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ascetic_Base.Ability_Ascetic_Base_C
// (None)

class UClass* UAbility_Ascetic_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ascetic_Base_C");

	return Clss;
}


// Ability_Ascetic_Base_C Ability_Ascetic_Base.Default__Ability_Ascetic_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ascetic_Base_C* UAbility_Ascetic_Base_C::GetDefaultObj()
{
	static class UAbility_Ascetic_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ascetic_Base_C*>(UAbility_Ascetic_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.InventoryPetsByCurrentActivePets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              Pets                                                             (Parm, OutParm, ZeroConstructor)
// TArray<class UClass*>              CurrentActivePets_C                                              (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActivePets_OutActors                              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetAllActivePets_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Ascetic_Base_C::InventoryPetsByCurrentActivePets(TArray<class UClass*>* Pets, const TArray<class UClass*>& CurrentActivePets_C, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActivePets_OutActors, bool CallFunc_GetAllActivePets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "InventoryPetsByCurrentActivePets");

	Params::UAbility_Ascetic_Base_C_InventoryPetsByCurrentActivePets_Params Parms{};

	Parms.CurrentActivePets_C = CurrentActivePets_C;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActivePets_OutActors = CallFunc_GetAllActivePets_OutActors;
	Parms.CallFunc_GetAllActivePets_ReturnValue = CallFunc_GetAllActivePets_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pets != nullptr)
		*Pets = std::move(Parms.Pets);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.InventoryPetsByCurrentPlayerClasses
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              Pets                                                             (Parm, OutParm, ZeroConstructor)
// TArray<class UClass*>              CurrentPets                                                      (Edit, BlueprintVisible, ZeroConstructor)
// bool                               SecondaryAdded                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddClassPetToPetArray_Added                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddClassPetToPetArray_Added1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Ascetic_Base_C::InventoryPetsByCurrentPlayerClasses(TArray<class UClass*>* Pets, const TArray<class UClass*>& CurrentPets, bool SecondaryAdded, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_AddClassPetToPetArray_Added, bool CallFunc_AddClassPetToPetArray_Added1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "InventoryPetsByCurrentPlayerClasses");

	Params::UAbility_Ascetic_Base_C_InventoryPetsByCurrentPlayerClasses_Params Parms{};

	Parms.CurrentPets = CurrentPets;
	Parms.SecondaryAdded = SecondaryAdded;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_AddClassPetToPetArray_Added = CallFunc_AddClassPetToPetArray_Added;
	Parms.CallFunc_AddClassPetToPetArray_Added1 = CallFunc_AddClassPetToPetArray_Added1;

	UObject::ProcessEvent(Func, &Parms);

	if (Pets != nullptr)
		*Pets = std::move(Parms.Pets);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.AddClassPetToPetArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakPlayerClass         PlayerClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              PetArray                                                         (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               Added                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Ascetic_Base_C::AddClassPetToPetArray(enum class EOakPlayerClass PlayerClass, TArray<class UClass*>& PetArray, bool* Added, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "AddClassPetToPetArray");

	Params::UAbility_Ascetic_Base_C_AddClassPetToPetArray_Params Parms{};

	Parms.PlayerClass = PlayerClass;
	Parms.PetArray = PetArray;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Added != nullptr)
		*Added = Parms.Added;

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.DisablePetSpawning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::DisablePetSpawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "DisablePetSpawning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.EnablePetSpawning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::EnablePetSpawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "EnablePetSpawning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.DespawnPets
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              PetsToDespawn                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAbility_Ascetic_Base_C::DespawnPets(TArray<class UClass*>& PetsToDespawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "DespawnPets");

	Params::UAbility_Ascetic_Base_C_DespawnPets_Params Parms{};

	Parms.PetsToDespawn = PetsToDespawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.RespawnPets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::RespawnPets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "RespawnPets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.Apply Status Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::Apply_Status_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "Apply Status Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.Remove Status Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::Remove_Status_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "Remove Status Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.OnArmorTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::OnArmorTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "OnArmorTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.OnResumed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::OnResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "OnResumed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.Init_ArmorBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::Init_ArmorBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "Init_ArmorBehavior");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.CleanUp_ArmorBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ascetic_Base_C::CleanUp_ArmorBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "CleanUp_ArmorBehavior");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ascetic_Base.Ability_Ascetic_Base_C.ExecuteUbergraph_Ability_Ascetic_Base
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakPlayerClass         CallFunc_GetPlayerClasses_Primary                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         CallFunc_GetPlayerClasses_Secondary                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPetOwnerComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_CustomEvent_PetsToDespawn                                 (ConstParm, ZeroConstructor, ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// TArray<class UClass*>              CallFunc_InventoryPetsByCurrentPlayerClasses_Pets                (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakPlayerClass         CallFunc_GetPlayerClasses_Primary1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         CallFunc_GetPlayerClasses_Secondary1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              CallFunc_InventoryPetsByCurrentPlayerClasses_Pets1               (ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// TArray<class UClass*>              CallFunc_InventoryPetsByCurrentPlayerClasses_Pets2               (ZeroConstructor, ReferenceParm)

void UAbility_Ascetic_Base_C::ExecuteUbergraph_Ability_Ascetic_Base(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, enum class EOakPlayerClass CallFunc_GetPlayerClasses_Primary, enum class EOakPlayerClass CallFunc_GetPlayerClasses_Secondary, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UPetOwnerComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<class UClass*>& K2Node_CustomEvent_PetsToDespawn, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, TArray<class UClass*>& CallFunc_InventoryPetsByCurrentPlayerClasses_Pets, bool CallFunc_RemoveStatusEffect_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UClass* CallFunc_Array_Get_Item1, int32 Temp_int_Loop_Counter_Variable1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Less_IntInt_ReturnValue1, enum class EOakPlayerClass CallFunc_GetPlayerClasses_Primary1, enum class EOakPlayerClass CallFunc_GetPlayerClasses_Secondary1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, TArray<class UClass*>& CallFunc_InventoryPetsByCurrentPlayerClasses_Pets1, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class UClass*>& CallFunc_InventoryPetsByCurrentPlayerClasses_Pets2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ascetic_Base_C", "ExecuteUbergraph_Ability_Ascetic_Base");

	Params::UAbility_Ascetic_Base_C_ExecuteUbergraph_Ability_Ascetic_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerClasses_Primary = CallFunc_GetPlayerClasses_Primary;
	Parms.CallFunc_GetPlayerClasses_Secondary = CallFunc_GetPlayerClasses_Secondary;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CustomEvent_PetsToDespawn = K2Node_CustomEvent_PetsToDespawn;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_InventoryPetsByCurrentPlayerClasses_Pets = CallFunc_InventoryPetsByCurrentPlayerClasses_Pets;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_GetPlayerClasses_Primary1 = CallFunc_GetPlayerClasses_Primary1;
	Parms.CallFunc_GetPlayerClasses_Secondary1 = CallFunc_GetPlayerClasses_Secondary1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_InventoryPetsByCurrentPlayerClasses_Pets1 = CallFunc_InventoryPetsByCurrentPlayerClasses_Pets1;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_InventoryPetsByCurrentPlayerClasses_Pets2 = CallFunc_InventoryPetsByCurrentPlayerClasses_Pets2;

	UObject::ProcessEvent(Func, &Parms);

}

}


