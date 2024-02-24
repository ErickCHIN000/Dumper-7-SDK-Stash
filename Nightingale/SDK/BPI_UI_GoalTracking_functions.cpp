#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_UI_GoalTracking.BPI_UI_GoalTracking_C
// (None)

class UClass* IBPI_UI_GoalTracking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_UI_GoalTracking_C");

	return Clss;
}


// BPI_UI_GoalTracking_C BPI_UI_GoalTracking.Default__BPI_UI_GoalTracking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_UI_GoalTracking_C* IBPI_UI_GoalTracking_C::GetDefaultObj()
{
	static class IBPI_UI_GoalTracking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_UI_GoalTracking_C*>(IBPI_UI_GoalTracking_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_UI_GoalTracking.BPI_UI_GoalTracking_C.TrackBuildingEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureAssetRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UI_GoalTracking_C::TrackBuildingEntity(const struct FStructureAssetReference& StructureAssetRef, bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_UI_GoalTracking_C", "TrackBuildingEntity");

	Params::IBPI_UI_GoalTracking_C_TrackBuildingEntity_Params Parms{};

	Parms.StructureAssetRef = StructureAssetRef;
	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_UI_GoalTracking.BPI_UI_GoalTracking_C.TrackCraftingEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    CraftingRecipeRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UI_GoalTracking_C::TrackCraftingEntity(const struct FCraftingRecipeReference& CraftingRecipeRef, bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_UI_GoalTracking_C", "TrackCraftingEntity");

	Params::IBPI_UI_GoalTracking_C_TrackCraftingEntity_Params Parms{};

	Parms.CraftingRecipeRef = CraftingRecipeRef;
	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_UI_GoalTracking.BPI_UI_GoalTracking_C.IsEntityPinned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPinned                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UI_GoalTracking_C::IsEntityPinned(class FName ID, bool* IsPinned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_UI_GoalTracking_C", "IsEntityPinned");

	Params::IBPI_UI_GoalTracking_C_IsEntityPinned_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPinned != nullptr)
		*IsPinned = Parms.IsPinned;

}

}


