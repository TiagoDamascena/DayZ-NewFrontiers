class NF_ActionTalkTo: ActionInteractBase
{
    void NF_ActionTalkTo()
    {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
        m_Text = "#nf_quests_talk_to";
    }

    override void CreateConditionComponents()
    {
        m_ConditionTarget = new CCTObject(10);
        m_ConditionItem = new CCINone;
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        if (GetGame().IsServer()) return true;

        PlayerBase ntarget = PlayerBase.Cast(target.GetObject());
        return ntarget && ntarget.NF_IsQuestNPC();
    }

    override void OnExecuteClient(ActionData action_data)
    {
        Print("Talk to interaction started!");
    }
}