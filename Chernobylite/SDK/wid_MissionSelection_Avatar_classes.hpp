#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass wid_MissionSelection_Avatar.wid_MissionSelection_Avatar_C
class UWid_MissionSelection_Avatar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Avatar;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CanBeSend;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            AvatarImg;                                         // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_MissionSelection_Avatar_C* GetDefaultObj();

	void SetEffect(enum class Enum_MissionSelection_Avatar_Type Type, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void ChangeAvatar(class UTexture2D* Image, class FText NewName, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Construct();
	void ExecuteUbergraph_wid_MissionSelection_Avatar(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}


