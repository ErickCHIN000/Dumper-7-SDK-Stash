#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x290 - 0x248)
// WidgetBlueprintGeneratedClass CreditsLine_v3.CreditsLine_v3_C
class UCreditsLine_v3_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            NameText;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RoleText;                                          // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x260(0x18)(Edit, BlueprintVisible)
	class FText                                  Role;                                              // 0x278(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UCreditsLine_v3_C* GetDefaultObj();

	void Construct();
	void OnSynchronizeProperties();
	void ExecuteUbergraph_CreditsLine_v3(int32 EntryPoint);
};

}


