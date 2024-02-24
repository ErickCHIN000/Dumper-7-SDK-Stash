#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TechTree.TechNodeArrowWidget
// (None)

class UClass* UTechNodeArrowWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TechNodeArrowWidget");

	return Clss;
}


// TechNodeArrowWidget TechTree.Default__TechNodeArrowWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTechNodeArrowWidget* UTechNodeArrowWidget::GetDefaultObj()
{
	static class UTechNodeArrowWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTechNodeArrowWidget*>(UTechNodeArrowWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TechTree.TechNodeArrowWidget.OnNodeArrowInitialized
// (Event, Public, BlueprintEvent)
// Parameters:

void UTechNodeArrowWidget::OnNodeArrowInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechNodeArrowWidget", "OnNodeArrowInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Class TechTree.TechNodeWidget
// (None)

class UClass* UTechNodeWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TechNodeWidget");

	return Clss;
}


// TechNodeWidget TechTree.Default__TechNodeWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTechNodeWidget* UTechNodeWidget::GetDefaultObj()
{
	static class UTechNodeWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTechNodeWidget*>(UTechNodeWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TechTree.TechNodeWidget.OnTechNodeInitialized
// (Event, Public, BlueprintEvent)
// Parameters:

void UTechNodeWidget::OnTechNodeInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechNodeWidget", "OnTechNodeInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Class TechTree.TechnologyAsset
// (None)

class UClass* UTechnologyAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TechnologyAsset");

	return Clss;
}


// TechnologyAsset TechTree.Default__TechnologyAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UTechnologyAsset* UTechnologyAsset::GetDefaultObj()
{
	static class UTechnologyAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UTechnologyAsset*>(UTechnologyAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class TechTree.TechnologySaveGame
// (None)

class UClass* UTechnologySaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TechnologySaveGame");

	return Clss;
}


// TechnologySaveGame TechTree.Default__TechnologySaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UTechnologySaveGame* UTechnologySaveGame::GetDefaultObj()
{
	static class UTechnologySaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UTechnologySaveGame*>(UTechnologySaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class TechTree.TechnologyTree
// (None)

class UClass* UTechnologyTree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TechnologyTree");

	return Clss;
}


// TechnologyTree TechTree.Default__TechnologyTree
// (Public, ClassDefaultObject, ArchetypeObject)

class UTechnologyTree* UTechnologyTree::GetDefaultObj()
{
	static class UTechnologyTree* Default = nullptr;

	if (!Default)
		Default = static_cast<UTechnologyTree*>(UTechnologyTree::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction TechTree.TechnologyTree.OnTechnologyUnlockStateChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTTTechNode*                 TechNode                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsUnlocked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechnologyTree::OnTechnologyUnlockStateChanged__DelegateSignature(class UTTTechNode* TechNode, bool IsUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechnologyTree", "OnTechnologyUnlockStateChanged__DelegateSignature");

	Params::UTechnologyTree_OnTechnologyUnlockStateChanged__DelegateSignature_Params Parms{};

	Parms.TechNode = TechNode;
	Parms.IsUnlocked = IsUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TechTree.TechnologyTree.IsTechnologyUnlocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTechnologyAsset*            Technology                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTechnologyTree::IsTechnologyUnlocked(class UTechnologyAsset* Technology)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechnologyTree", "IsTechnologyUnlocked");

	Params::UTechnologyTree_IsTechnologyUnlocked_Params Parms{};

	Parms.Technology = Technology;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechnologyTree.HasUnlockedParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTechnologyAsset*            Technology                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTechnologyTree::HasUnlockedParents(class UTechnologyAsset* Technology)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechnologyTree", "HasUnlockedParents");

	Params::UTechnologyTree_HasUnlockedParents_Params Parms{};

	Parms.Technology = Technology;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechnologyTree.GetTechAssetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UTechnologyTree::GetTechAssetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechnologyTree", "GetTechAssetName");

	Params::UTechnologyTree_GetTechAssetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechnologyTree.GetConnections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FTechNodeLink>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTechNodeLink> UTechnologyTree::GetConnections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechnologyTree", "GetConnections");

	Params::UTechnologyTree_GetConnections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechnologyTree.FilterConnections
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FTechNodeLink>       ConnectionsIn                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UTechnologyAsset*>    IgnoredParentTechnologies                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UTechnologyAsset*>    IgnoredChildTechnologies                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FTechNodeLink>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTechNodeLink> UTechnologyTree::FilterConnections(TArray<struct FTechNodeLink>& ConnectionsIn, TArray<class UTechnologyAsset*>& IgnoredParentTechnologies, TArray<class UTechnologyAsset*>& IgnoredChildTechnologies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechnologyTree", "FilterConnections");

	Params::UTechnologyTree_FilterConnections_Params Parms{};

	Parms.ConnectionsIn = ConnectionsIn;
	Parms.IgnoredParentTechnologies = IgnoredParentTechnologies;
	Parms.IgnoredChildTechnologies = IgnoredChildTechnologies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TechTree.TechTreeManager
// (None)

class UClass* UTechTreeManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TechTreeManager");

	return Clss;
}


// TechTreeManager TechTree.Default__TechTreeManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UTechTreeManager* UTechTreeManager::GetDefaultObj()
{
	static class UTechTreeManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UTechTreeManager*>(UTechTreeManager::StaticClass()->DefaultObject);

	return Default;
}


// Function TechTree.TechTreeManager.UnlockTechnology
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTechnologyAsset*            Technology                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::UnlockTechnology(class UTechnologyAsset* Technology)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "UnlockTechnology");

	Params::UTechTreeManager_UnlockTechnology_Params Parms{};

	Parms.Technology = Technology;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TechTree.TechTreeManager.SelectTechTree
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTechnologyTree*             TechTree                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::SelectTechTree(class UTechnologyTree* TechTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "SelectTechTree");

	Params::UTechTreeManager_SelectTechTree_Params Parms{};

	Parms.TechTree = TechTree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TechTree.TechTreeManager.SaveTechToObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USaveGame*                   SaveGameObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::SaveTechToObject(class USaveGame* SaveGameObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "SaveTechToObject");

	Params::UTechTreeManager_SaveTechToObject_Params Parms{};

	Parms.SaveGameObject = SaveGameObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TechTree.TechTreeManager.SaveTechStateFromSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::SaveTechStateFromSlot(const class FString& SlotName, int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "SaveTechStateFromSlot");

	Params::UTechTreeManager_SaveTechStateFromSlot_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TechTree.TechTreeManager.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTechTreeManager::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction TechTree.TechTreeManager.OnTechTreeRecovered__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTechnologyTree*             TechTree                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::OnTechTreeRecovered__DelegateSignature(class UTechnologyTree* TechTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "OnTechTreeRecovered__DelegateSignature");

	Params::UTechTreeManager_OnTechTreeRecovered__DelegateSignature_Params Parms{};

	Parms.TechTree = TechTree;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction TechTree.TechTreeManager.OnTechTreeAssigned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTechnologyTree*             TechTree                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::OnTechTreeAssigned__DelegateSignature(class UTechnologyTree* TechTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "OnTechTreeAssigned__DelegateSignature");

	Params::UTechTreeManager_OnTechTreeAssigned__DelegateSignature_Params Parms{};

	Parms.TechTree = TechTree;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction TechTree.TechTreeManager.OnTechnologyUnlockStateChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTechnologyTree*             TechTree                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTTTechNode*                 TechNode                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsUnlocked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::OnTechnologyUnlockStateChanged__DelegateSignature(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "OnTechnologyUnlockStateChanged__DelegateSignature");

	Params::UTechTreeManager_OnTechnologyUnlockStateChanged__DelegateSignature_Params Parms{};

	Parms.TechTree = TechTree;
	Parms.TechNode = TechNode;
	Parms.IsUnlocked = IsUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TechTree.TechTreeManager.LockTechnology
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTechnologyAsset*            Technology                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::LockTechnology(class UTechnologyAsset* Technology)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "LockTechnology");

	Params::UTechTreeManager_LockTechnology_Params Parms{};

	Parms.Technology = Technology;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TechTree.TechTreeManager.LoadTechStateFromSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::LoadTechStateFromSlot(const class FString& SlotName, int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "LoadTechStateFromSlot");

	Params::UTechTreeManager_LoadTechStateFromSlot_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TechTree.TechTreeManager.LoadTechFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USaveGame*                   SaveGameObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::LoadTechFromObject(class USaveGame* SaveGameObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "LoadTechFromObject");

	Params::UTechTreeManager_LoadTechFromObject_Params Parms{};

	Parms.SaveGameObject = SaveGameObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TechTree.TechTreeManager.IsTechnologyUnlocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTechnologyAsset*            Technology                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTechTreeManager::IsTechnologyUnlocked(class UTechnologyAsset* Technology)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "IsTechnologyUnlocked");

	Params::UTechTreeManager_IsTechnologyUnlocked_Params Parms{};

	Parms.Technology = Technology;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechTreeManager.IsChildTechnology
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTTTechNode*                 ParentNode                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTechnologyAsset*            ChildNodeTechnology                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTechTreeManager::IsChildTechnology(class UTTTechNode* ParentNode, class UTechnologyAsset* ChildNodeTechnology)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "IsChildTechnology");

	Params::UTechTreeManager_IsChildTechnology_Params Parms{};

	Parms.ParentNode = ParentNode;
	Parms.ChildNodeTechnology = ChildNodeTechnology;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechTreeManager.HasUnlockedParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTechnologyAsset*            Technology                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTechTreeManager::HasUnlockedParents(class UTechnologyAsset* Technology)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "HasUnlockedParents");

	Params::UTechTreeManager_HasUnlockedParents_Params Parms{};

	Parms.Technology = Technology;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechTreeManager.HandleTechnologyStateChanged
// (Native, Protected)
// Parameters:
// class UTTTechNode*                 TechNode                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsUnlocked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::HandleTechnologyStateChanged(class UTTTechNode* TechNode, bool IsUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "HandleTechnologyStateChanged");

	Params::UTechTreeManager_HandleTechnologyStateChanged_Params Parms{};

	Parms.TechNode = TechNode;
	Parms.IsUnlocked = IsUnlocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TechTree.TechTreeManager.GetTechTreeWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTechTreeWidget*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTechTreeWidget* UTechTreeManager::GetTechTreeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "GetTechTreeWidget");

	Params::UTechTreeManager_GetTechTreeWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechTreeManager.GetSavegameTechObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USaveGame*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USaveGame* UTechTreeManager::GetSavegameTechObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "GetSavegameTechObject");

	Params::UTechTreeManager_GetSavegameTechObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechTreeManager.GetNumberTreesAssigned
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTechTreeManager::GetNumberTreesAssigned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "GetNumberTreesAssigned");

	Params::UTechTreeManager_GetNumberTreesAssigned_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechTreeManager.GetNodeFromTechAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTechnologyAsset*            Technology                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTTTechNode*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTTTechNode* UTechTreeManager::GetNodeFromTechAsset(class UTechnologyAsset* Technology)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "GetNodeFromTechAsset");

	Params::UTechTreeManager_GetNodeFromTechAsset_Params Parms{};

	Parms.Technology = Technology;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechTreeManager.GetAssignedTechTree
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTechnologyTree*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTechnologyTree* UTechTreeManager::GetAssignedTechTree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "GetAssignedTechTree");

	Params::UTechTreeManager_GetAssignedTechTree_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechTreeManager.AssignTechTree
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTechnologyTree*             TechTree                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTechTreeWidget*             TechTreeWidget                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTechTreeManager::AssignTechTree(class UTechnologyTree* TechTree, class UTechTreeWidget* TechTreeWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeManager", "AssignTechTree");

	Params::UTechTreeManager_AssignTechTree_Params Parms{};

	Parms.TechTree = TechTree;
	Parms.TechTreeWidget = TechTreeWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TechTree.TechTreeWidget
// (None)

class UClass* UTechTreeWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TechTreeWidget");

	return Clss;
}


// TechTreeWidget TechTree.Default__TechTreeWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTechTreeWidget* UTechTreeWidget::GetDefaultObj()
{
	static class UTechTreeWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTechTreeWidget*>(UTechTreeWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TechTree.TechTreeWidget.UpdateConnections
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FTechNodeLink>       Connections                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTechTreeWidget::UpdateConnections(TArray<struct FTechNodeLink>& Connections)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeWidget", "UpdateConnections");

	Params::UTechTreeWidget_UpdateConnections_Params Parms{};

	Parms.Connections = Connections;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TechTree.TechTreeWidget.UpdateArrowPinWidgets
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTechTreeWidget::UpdateArrowPinWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeWidget", "UpdateArrowPinWidgets");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TechTree.TechTreeWidget.GetTechNodeWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UTechNodeWidget*>     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UTechNodeWidget*> UTechTreeWidget::GetTechNodeWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeWidget", "GetTechNodeWidgets");

	Params::UTechTreeWidget_GetTechNodeWidgets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechTreeWidget.GetTechNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTechnologyAsset*            TechnologyAsset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTechNodeWidget*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTechNodeWidget* UTechTreeWidget::GetTechNode(class UTechnologyAsset* TechnologyAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeWidget", "GetTechNode");

	Params::UTechTreeWidget_GetTechNode_Params Parms{};

	Parms.TechnologyAsset = TechnologyAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TechTree.TechTreeWidget.GetArrowWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UTechNodeArrowWidget*>ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UTechNodeArrowWidget*> UTechTreeWidget::GetArrowWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TechTreeWidget", "GetArrowWidgets");

	Params::UTechTreeWidget_GetArrowWidgets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TechTree.TTBaseNode
// (None)

class UClass* UTTBaseNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TTBaseNode");

	return Clss;
}


// TTBaseNode TechTree.Default__TTBaseNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UTTBaseNode* UTTBaseNode::GetDefaultObj()
{
	static class UTTBaseNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UTTBaseNode*>(UTTBaseNode::StaticClass()->DefaultObject);

	return Default;
}


// Class TechTree.TTTechNode
// (None)

class UClass* UTTTechNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TTTechNode");

	return Clss;
}


// TTTechNode TechTree.Default__TTTechNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UTTTechNode* UTTTechNode::GetDefaultObj()
{
	static class UTTTechNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UTTTechNode*>(UTTTechNode::StaticClass()->DefaultObject);

	return Default;
}

}


