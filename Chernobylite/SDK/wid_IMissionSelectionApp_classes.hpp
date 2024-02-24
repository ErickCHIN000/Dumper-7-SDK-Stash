#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass wid_IMissionSelectionApp.wid_IMissionSelectionApp_C
class IWid_IMissionSelectionApp_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWid_IMissionSelectionApp_C* GetDefaultObj();

	void GetCurrentSelection(class FName* EventID, enum class EEventMap* Map);
	void End();
	void Start();
	void Accept();
	void Right();
	void Left();
	void Down();
	void Up();
};

}


