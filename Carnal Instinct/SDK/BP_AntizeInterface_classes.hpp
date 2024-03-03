#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_AntizeInterface.BP_AntizeInterface_C
class IBP_AntizeInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_AntizeInterface_C* GetDefaultObj();

	void MSG_IsKeyEditing(bool* Editing_);
	void MSG_ChangeGameplaySetting(enum class E_TemplateUI Setting, int32 Index, float Value);
	void MSG_RequestKey(bool Action_, enum class E_TemplateControlAction ActionName, enum class E_TemplateControlAxis AxisName, struct FInputChord* MyKey);
	void MSG_ChangeInvertMouse(bool InvertMouse);
	void MSG_ChangeSensitivity(float Sensitivity);
};

}


