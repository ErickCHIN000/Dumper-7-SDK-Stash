#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionAvatarBlock.wid_CompanionAvatarBlock_C
class UWid_CompanionAvatarBlock_C : public UUserWidget
{
public:
	class UImage*                                CompanionIcon;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CompanionName;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_CompanionAvatarBlock_C* GetDefaultObj();

	void Init(class FName CompanionID, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FCompanionDefinition& CallFunc_GetCompanionsInfo_ReturnValue);
};

}


