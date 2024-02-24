#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ConstructionSystemRuntime.ConstructionSystemTool
// (None)

class UClass* UConstructionSystemTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionSystemTool");

	return Clss;
}


// ConstructionSystemTool ConstructionSystemRuntime.Default__ConstructionSystemTool
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionSystemTool* UConstructionSystemTool::GetDefaultObj()
{
	static class UConstructionSystemTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionSystemTool*>(UConstructionSystemTool::StaticClass()->DefaultObject);

	return Default;
}


// Class ConstructionSystemRuntime.ConstructionSystemBuildTool
// (None)

class UClass* UConstructionSystemBuildTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionSystemBuildTool");

	return Clss;
}


// ConstructionSystemBuildTool ConstructionSystemRuntime.Default__ConstructionSystemBuildTool
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionSystemBuildTool* UConstructionSystemBuildTool::GetDefaultObj()
{
	static class UConstructionSystemBuildTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionSystemBuildTool*>(UConstructionSystemBuildTool::StaticClass()->DefaultObject);

	return Default;
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrefabricatorAssetInterface*InActivePrefabAsset                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConstructionSystemBuildTool::SetActivePrefab(class UPrefabricatorAssetInterface* InActivePrefabAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemBuildTool", "SetActivePrefab");

	Params::UConstructionSystemBuildTool_SetActivePrefab_Params Parms{};

	Parms.InActivePrefabAsset = InActivePrefabAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep
// (Final, Native, Private)
// Parameters:
// float                              NumSteps                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConstructionSystemBuildTool::HandleInput_RotateCursorStep(float NumSteps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemBuildTool", "HandleInput_RotateCursorStep");

	Params::UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Params Parms{};

	Parms.NumSteps = NumSteps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev
// (Final, Native, Private)
// Parameters:

void UConstructionSystemBuildTool::HandleInput_CursorMovePrev()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemBuildTool", "HandleInput_CursorMovePrev");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext
// (Final, Native, Private)
// Parameters:

void UConstructionSystemBuildTool::HandleInput_CursorMoveNext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemBuildTool", "HandleInput_CursorMoveNext");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor
// (Final, Native, Private)
// Parameters:

void UConstructionSystemBuildTool::HandleInput_ConstructAtCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemBuildTool", "HandleInput_ConstructAtCursor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ConstructionSystemRuntime.ConstructionSystemComponent
// (None)

class UClass* UConstructionSystemComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionSystemComponent");

	return Clss;
}


// ConstructionSystemComponent ConstructionSystemRuntime.Default__ConstructionSystemComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionSystemComponent* UConstructionSystemComponent::GetDefaultObj()
{
	static class UConstructionSystemComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionSystemComponent*>(UConstructionSystemComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UConstructionSystemComponent::ToggleConstructionSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemComponent", "ToggleConstructionSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UConstructionSystemComponent::ShowBuildMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemComponent", "ShowBuildMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EConstructionSystemToolTypeInToolType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConstructionSystemComponent::SetActiveTool(enum class EConstructionSystemToolType InToolType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemComponent", "SetActiveTool");

	Params::UConstructionSystemComponent_SetActiveTool_Params Parms{};

	Parms.InToolType = InToolType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UConstructionSystemComponent::HideBuildMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemComponent", "HideBuildMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EConstructionSystemToolTypeInToolType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConstructionSystemTool*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConstructionSystemTool* UConstructionSystemComponent::GetTool(enum class EConstructionSystemToolType InToolType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemComponent", "GetTool");

	Params::UConstructionSystemComponent_GetTool_Params Parms{};

	Parms.InToolType = InToolType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EConstructionSystemToolTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EConstructionSystemToolType UConstructionSystemComponent::GetActiveToolType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemComponent", "GetActiveToolType");

	Params::UConstructionSystemComponent_GetActiveToolType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UConstructionSystemTool*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConstructionSystemTool* UConstructionSystemComponent::GetActiveTool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemComponent", "GetActiveTool");

	Params::UConstructionSystemComponent_GetActiveTool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EConstructionSystemToolTypeInToolType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConstructionSystemComponent::EnableConstructionSystem(enum class EConstructionSystemToolType InToolType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemComponent", "EnableConstructionSystem");

	Params::UConstructionSystemComponent_EnableConstructionSystem_Params Parms{};

	Parms.InToolType = InToolType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UConstructionSystemComponent::DisableConstructionSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemComponent", "DisableConstructionSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ConstructionSystemRuntime.ConstructionSystemItemUserData
// (None)

class UClass* UConstructionSystemItemUserData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionSystemItemUserData");

	return Clss;
}


// ConstructionSystemItemUserData ConstructionSystemRuntime.Default__ConstructionSystemItemUserData
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionSystemItemUserData* UConstructionSystemItemUserData::GetDefaultObj()
{
	static class UConstructionSystemItemUserData* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionSystemItemUserData*>(UConstructionSystemItemUserData::StaticClass()->DefaultObject);

	return Default;
}


// Class ConstructionSystemRuntime.ConstructionSystemCursor
// (None)

class UClass* UConstructionSystemCursor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionSystemCursor");

	return Clss;
}


// ConstructionSystemCursor ConstructionSystemRuntime.Default__ConstructionSystemCursor
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionSystemCursor* UConstructionSystemCursor::GetDefaultObj()
{
	static class UConstructionSystemCursor* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionSystemCursor*>(UConstructionSystemCursor::StaticClass()->DefaultObject);

	return Default;
}


// Class ConstructionSystemRuntime.ConstructionSystemRemoveTool
// (None)

class UClass* UConstructionSystemRemoveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionSystemRemoveTool");

	return Clss;
}


// ConstructionSystemRemoveTool ConstructionSystemRuntime.Default__ConstructionSystemRemoveTool
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionSystemRemoveTool* UConstructionSystemRemoveTool::GetDefaultObj()
{
	static class UConstructionSystemRemoveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionSystemRemoveTool*>(UConstructionSystemRemoveTool::StaticClass()->DefaultObject);

	return Default;
}


// Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor
// (Final, Native, Protected)
// Parameters:

void UConstructionSystemRemoveTool::HandleInput_RemoveAtCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemRemoveTool", "HandleInput_RemoveAtCursor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ConstructionSystemRuntime.ConstructionSystemSaveGame
// (None)

class UClass* UConstructionSystemSaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionSystemSaveGame");

	return Clss;
}


// ConstructionSystemSaveGame ConstructionSystemRuntime.Default__ConstructionSystemSaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionSystemSaveGame* UConstructionSystemSaveGame::GetDefaultObj()
{
	static class UConstructionSystemSaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionSystemSaveGame*>(UConstructionSystemSaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class ConstructionSystemRuntime.ConstructionSystemSaveSystem
// (None)

class UClass* UConstructionSystemSaveSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionSystemSaveSystem");

	return Clss;
}


// ConstructionSystemSaveSystem ConstructionSystemRuntime.Default__ConstructionSystemSaveSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionSystemSaveSystem* UConstructionSystemSaveSystem::GetDefaultObj()
{
	static class UConstructionSystemSaveSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionSystemSaveSystem*>(UConstructionSystemSaveSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveSlotName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSavePlayerState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConstructionSystemSaveSystem::SaveConstructionSystemLevel(class UObject* WorldContextObject, const class FString& SaveSlotName, int32 UserIndex, bool bSavePlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemSaveSystem", "SaveConstructionSystemLevel");

	Params::UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SaveSlotName = SaveSlotName;
	Parms.UserIndex = UserIndex;
	Parms.bSavePlayerState = bSavePlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        LevelName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAbsolute                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveSlotName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConstructionSystemSaveSystem::LoadConstructionSystemLevel(class UObject* WorldContextObject, class FName& LevelName, bool bAbsolute, const class FString& SaveSlotName, int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemSaveSystem", "LoadConstructionSystemLevel");

	Params::UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelName = LevelName;
	Parms.bAbsolute = bAbsolute;
	Parms.SaveSlotName = SaveSlotName;
	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConstructionSystemSaveSystem::HandleConstructionSystemLevelLoad(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemSaveSystem", "HandleConstructionSystemLevelLoad");

	Params::UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPrefabricatorConstructionSnapComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabricatorConstructionSnapComponent");

	return Clss;
}


// PrefabricatorConstructionSnapComponent ConstructionSystemRuntime.Default__PrefabricatorConstructionSnapComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabricatorConstructionSnapComponent* UPrefabricatorConstructionSnapComponent::GetDefaultObj()
{
	static class UPrefabricatorConstructionSnapComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabricatorConstructionSnapComponent*>(UPrefabricatorConstructionSnapComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ConstructionSystemRuntime.PrefabricatorConstructionSnap
// (Actor)

class UClass* APrefabricatorConstructionSnap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabricatorConstructionSnap");

	return Clss;
}


// PrefabricatorConstructionSnap ConstructionSystemRuntime.Default__PrefabricatorConstructionSnap
// (Public, ClassDefaultObject, ArchetypeObject)

class APrefabricatorConstructionSnap* APrefabricatorConstructionSnap::GetDefaultObj()
{
	static class APrefabricatorConstructionSnap* Default = nullptr;

	if (!Default)
		Default = static_cast<APrefabricatorConstructionSnap*>(APrefabricatorConstructionSnap::StaticClass()->DefaultObject);

	return Default;
}


// Class ConstructionSystemRuntime.ConstructionSystemBuildUI
// (None)

class UClass* IConstructionSystemBuildUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionSystemBuildUI");

	return Clss;
}


// ConstructionSystemBuildUI ConstructionSystemRuntime.Default__ConstructionSystemBuildUI
// (Public, ClassDefaultObject, ArchetypeObject)

class IConstructionSystemBuildUI* IConstructionSystemBuildUI::GetDefaultObj()
{
	static class IConstructionSystemBuildUI* Default = nullptr;

	if (!Default)
		Default = static_cast<IConstructionSystemBuildUI*>(IConstructionSystemBuildUI::StaticClass()->DefaultObject);

	return Default;
}


// Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConstructionSystemUIAsset*  UIAsset                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IConstructionSystemBuildUI::SetUIAsset(class UConstructionSystemUIAsset* UIAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemBuildUI", "SetUIAsset");

	Params::IConstructionSystemBuildUI_SetUIAsset_Params Parms{};

	Parms.UIAsset = UIAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConstructionSystemComponent*ConstructionSystem                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IConstructionSystemBuildUI::SetConstructionSystem(class UConstructionSystemComponent* ConstructionSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstructionSystemBuildUI", "SetConstructionSystem");

	Params::IConstructionSystemBuildUI_SetConstructionSystem_Params Parms{};

	Parms.ConstructionSystem = ConstructionSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ConstructionSystemRuntime.ConstructionSystemUIAsset
// (None)

class UClass* UConstructionSystemUIAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionSystemUIAsset");

	return Clss;
}


// ConstructionSystemUIAsset ConstructionSystemRuntime.Default__ConstructionSystemUIAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionSystemUIAsset* UConstructionSystemUIAsset::GetDefaultObj()
{
	static class UConstructionSystemUIAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionSystemUIAsset*>(UConstructionSystemUIAsset::StaticClass()->DefaultObject);

	return Default;
}

}


