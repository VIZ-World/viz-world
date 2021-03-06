#pragma once

#include <graphene/protocol/operations.hpp>
#include <graphene/chain/database.hpp>

#include <graphene/plugins/mongo_db/mongo_db_types.hpp>


namespace graphene {
namespace plugins {
namespace mongo_db {

    class operation_writer {
    public:
        using result_type = document;

        operation_writer();

        result_type operator()(const vote_operation& op);
        result_type operator()(const content_operation& op);
        result_type operator()(const transfer_operation& op);
        result_type operator()(const transfer_to_vesting_operation& op);
        result_type operator()(const withdraw_vesting_operation& op);
        result_type operator()(const account_update_operation& op);
        result_type operator()(const witness_update_operation& op);
        result_type operator()(const account_witness_vote_operation& op);
        result_type operator()(const account_witness_proxy_operation& op);
        result_type operator()(const delete_content_operation& op);
        result_type operator()(const custom_operation& op);
        result_type operator()(const set_withdraw_vesting_route_operation& op);
        result_type operator()(const request_account_recovery_operation& op);
        result_type operator()(const recover_account_operation& op);
        result_type operator()(const change_recovery_account_operation& op);
        result_type operator()(const escrow_transfer_operation& op);
        result_type operator()(const escrow_dispute_operation& op);
        result_type operator()(const escrow_release_operation&op);
        result_type operator()(const escrow_approve_operation& op);
//
        result_type operator()(const delegate_vesting_shares_operation& op);
        result_type operator()(const account_create_operation& op);
        result_type operator()(const account_metadata_operation& op);
        result_type operator()(const proposal_create_operation& op);
        result_type operator()(const proposal_update_operation& op);
        result_type operator()(const proposal_delete_operation& op);
//
        result_type operator()(const author_reward_operation& op);
        result_type operator()(const curation_reward_operation& op);
        result_type operator()(const content_reward_operation& op);
        result_type operator()(const fill_vesting_withdraw_operation& op);
        result_type operator()(const shutdown_witness_operation& op);
        result_type operator()(const hardfork_operation& op);
        result_type operator()(const content_payout_update_operation& op);
        result_type operator()(const content_benefactor_reward_operation& op);
//
        result_type operator()(const return_vesting_delegation_operation& op);
//
        result_type operator()(const chain_properties_update_operation& op);
    };

}}} // graphene::plugins::mongo_db
