#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SelectionInfo.SelectionInfo_C
class ISelectionInfo_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISelectionInfo_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result);
};

}


